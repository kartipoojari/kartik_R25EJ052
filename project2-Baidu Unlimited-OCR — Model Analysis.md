Baidu Unlimited-OCR — Model Analysis
Overview
Unlimited-OCR is a vision-language model released by Baidu on June 22, 2026, positioned as a direct evolution of DeepSeek-OCR. The paper was published on arXiv just days ago (June 23, 2026), making this a very fresh release. huggingface

The Core Problem It Solves
End-to-end OCR models that use a large language model as the decoder can leverage the prior distribution of language for improved OCR performance, but the downside is significant: as the output sequence lengthens, the accumulated KV cache drives up memory consumption and progressively slows down generation. This is the fundamental bottleneck that makes long-document OCR impractical with standard transformer decoders — a ten-page PDF is vastly more expensive than a one-page one. arxiv

Key Technical Innovation: Reference Sliding Window Attention (R-SWA)
The central contribution of the paper is a new attention mechanism called R-SWA:
Taking DeepSeek-OCR as the baseline, Unlimited OCR replaces all attention layers in the decoder with the proposed Reference Sliding Window Attention (R-SWA), which reduces attention computation costs while maintaining a constant KV cache throughout the entire decoding process. arxiv
This is a meaningful architectural departure. Standard transformers grow their KV cache linearly with output length — R-SWA keeps it fixed regardless of how long the document is, analogous to how humans can copy text without their cognitive load accumulating with each line written.
By combining the high compression rate of DeepSeek-OCR's encoder with the constant KV cache design, Unlimited OCR can transcribe dozens of pages of documents in a single forward pass under a standard maximum length of 32K tokens. arxiv
Notably, R-SWA is described as a general-purpose parsing attention mechanism — beyond OCR, it is equally applicable to tasks such as ASR, translation, and others. arxiv

Model Specs
PropertyDetailParameters3BTensor typeBF16Context length32,768 tokensLicenseMITTaskImage-Text-to-Text (multilingual)FrameworkTransformers / Safetensors

Inference Modes
The model ships with two inference configurations:
Single-image ("gundam" mode): base_size=1024, image_size=640, crop_mode=True — optimized for dense, high-detail single pages.
Multi-page / PDF ("base" mode): image_size=1024 — designed for sequential multi-page document parsing in one shot.
It supports serving via HuggingFace Transformers, vLLM, and SGLang with an OpenAI-compatible API, and is also available on ModelScope for the Chinese ecosystem. huggingface

Lineage & Acknowledgements
The model explicitly acknowledges DeepSeek-OCR, DeepSeek-OCR-2, and PaddleOCR as foundational influences. This places it in a lineage of encoder-heavy OCR models that use LLM decoders, with Baidu's contribution being the memory-efficient decoder redesign. huggingface

Early Traction
Within days of release, the model has garnered 454 likes on Hugging Face, ~8,400 downloads in the last month, 3 fine-tuned derivatives, and 8 community quantizations (for llama.cpp, Ollama, LM Studio, etc.). That's a fast uptake for a brand-new model. huggingface

Assessment
Strengths: The constant KV cache is a genuinely useful engineering insight for production document pipelines. At 3B parameters with MIT licensing, it's accessible for on-premise deployment. The single-forward-pass multi-page parsing is a practical capability most competing models lack.
Open questions: The paper is a technical report rather than a peer-reviewed benchmarked paper, so independent accuracy comparisons against state-of-the-art OCR systems (e.g., Surya, GOT-OCR, Mistral-OCR) are not yet available. R-SWA's performance tradeoffs against full attention for short documents also remain to be quantified externally.
