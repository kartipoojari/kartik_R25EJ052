<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Kartik | Tech Portfolio</title>
    <style>
        * {
            box-sizing: border-box;
            margin: 0;
            padding: 0;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
        }

        body {
            background-color: #f4f6f9;
            color: #2c3e50;
            line-height: 1.6;
        }

        header {
            background: linear-gradient(135deg, #0f2027 0%, #203a43 50%, #2c5364 100%);
            color: #fff;
            padding: 100px 20px;
            text-align: center;
        }

        header h1 {
            font-size: 3rem;
            margin-bottom: 10px;
            letter-spacing: 1px;
        }

        header p {
            font-size: 1.3rem;
            color: #00d2ff;
            font-weight: 400;
        }

        .container {
            max-width: 950px;
            margin: 40px auto;
            padding: 0 20px;
        }

        section {
            background: #fff;
            padding: 35px;
            margin-bottom: 25px;
            border-radius: 10px;
            box-shadow: 0 4px 12px rgba(0,0,0,0.05);
        }

        h2 {
            color: #0f2027;
            margin-bottom: 20px;
            border-bottom: 3px solid #00d2ff;
            padding-bottom: 8px;
            font-size: 1.6rem;
        }

        /* Timeline styling for Education */
        .timeline {
            border-left: 3px solid #00d2ff;
            padding-left: 20px;
            margin-left: 10px;
        }

        .timeline-item {
            margin-bottom: 25px;
            position: relative;
        }

        .timeline-item::before {
            content: '';
            position: absolute;
            left: -31px;
            top: 5px;
            background: #0f2027;
            border: 2px solid #00d2ff;
            width: 15px;
            height: 15px;
            border-radius: 50%;
        }

        .timeline-item h3 {
            font-size: 1.2rem;
            color: #0f2027;
        }

        .timeline-item .institution {
            font-weight: 600;
            color: #34495e;
        }

        .timeline-item .duration {
            font-size: 0.9rem;
            color: #7f8c8d;
        }

        /* Grid setups for categories */
        .grid-2 {
            display: grid;
            grid-template-columns: 1fr 1fr;
            gap: 20px;
        }

        @media (max-width: 768px) {
            .grid-2 { grid-template-columns: 1fr; }
        }

        /* Badges & Lists */
        .badge-list {
            display: flex;
            flex-wrap: wrap;
            gap: 10px;
            margin-top: 5px;
        }

        .badge {
            background: #eef2f3;
            color: #1e3c72;
            padding: 6px 14px;
            border-radius: 20px;
            font-weight: 600;
            font-size: 0.9rem;
            border: 1px solid #dce4ec;
        }

        ul {
            list-style-position: inside;
            padding-left: 5px;
        }

        ul li {
            margin-bottom: 8px;
        }

        /* Project Card */
        .project-card {
            background: #f8f9fa;
            padding: 25px;
            border-radius: 8px;
            border-left: 5px solid #0f2027;
        }

        .project-card h3 {
            color: #0f2027;
            margin-bottom: 10px;
        }

        /* Declaration styling */
        .declaration-box {
            font-style: italic;
            background: #fafafa;
            border: 1px dashed #bdc3c7;
            padding: 20px;
            border-radius: 6px;
            margin-top: 20px;
        }

        .dec-meta {
            margin-top: 20px;
            display: flex;
            justify-content: space-between;
            font-style: normal;
            font-weight: 600;
        }

        .links a {
            display: inline-block;
            margin-right: 15px;
            margin-top: 10px;
            color: #fff;
            background: #0f2027;
            text-decoration: none;
            font-weight: bold;
            padding: 10px 20px;
            border-radius: 5px;
            transition: background 0.3s;
        }

        .links a:hover {
            background: #00d2ff;
            color: #0f2027;
        }

        footer {
            text-align: center;
            padding: 25px;
            background: #0f2027;
            color: #fff;
            font-size: 0.9rem;
            margin-top: 40px;
        }
    </style>
</head>
<body>

    <header>
        <h1>Kartik</h1>
        <p>Computer Science & Information Technology Student</p>
    </header>

    <div class="container">
        
        <!-- About Section -->
        <section id="about">
            <h2>About Me</h2>
            <p>I am an aspiring technology professional currently studying Computer Science & Information Technology at <strong>REVA University, Bangalore</strong>. Equipped with fundamental coding principles, software engineering mentalities, and an eager drive to learn, I am keen to explore deep challenges within computational frameworks and real-world system applications.</p>
        </section>

        <!-- Education Section -->
        <section id="education">
            <h2>Education</h2>
            <div class="timeline">
                
                <div class="timeline-item">
                    <h3>B.Tech in Computer Science & Information Technology</h3>
                    <p class="institution">REVA University, Bangalore</p>
                    <p class="duration">Current Studies</p>
                </div>

                <div class="timeline-item">
                    <h3>Pre-University Education (PUC)</h3>
                    <p class="institution">Shree Guru Independent PU College of Science</p>
                    <p class="duration">Completed</p>
                </div>

                <div class="timeline-item">
                    <h3>Schooling</h3>
                    <p class="institution">Adarsh Vidyalaya School, Polakpalli</p>
                    <p class="duration">Completed</p>
                </div>

            </div>
        </section>

        <!-- Skills & Tools Split Grid -->
        <div class="grid-2">
            <section id="skills">
                <h2>Technical Skills</h2>
                <div class="badge-list">
                    <span class="badge">C Programming</span>
                    <span class="badge">Python (Basics)</span>
                    <span class="badge">JAVA (Basic)</span>
                </div>
            </section>

            <section id="tools">
                <h2>Tools & Technologies</h2>
                <div class="badge-list">
                    <span class="badge">Git & GitHub</span>
                    <span class="badge">VS Code</span>
                    <span class="badge">MS Office</span>
                </div>
            </section>
        </div>

        <!-- Project Section -->
        <section id="projects">
            <h2>Projects</h2>
            <div class="project-card">
                <h3>C Programming Mini Project</h3>
                <ul>
                    <li>Developed and structured an independent system-level mini project running natively in C.</li>
                    <li>Applied structural logical layouts utilizing programming concepts such as functional modules, conditional execution loops, and array manipulation blocks.</li>
                    <li>Demonstrated systematic debugging workflows and problem-solving methodologies to complete execution tracks smoothly.</li>
                </ul>
            </div>
        </section>

        <!-- Split Interests, Strengths, Hobbies -->
        <div class="grid-2">
            <section id="interests">
                <h2>Areas of Interest</h2>
                <ul>
                    <li>Software Development</li>
                    <li>Artificial Intelligence</li>
                    <li>Data Structures & Algorithms</li>
                </ul>
            </section>

            <section id="strengths">
                <h2>Key Strengths</h2>
                <ul>
                    <li>Quick learner with deep technical curiosity</li>
                    <li>Analytical problem-solving abilities</li>
                    <li>Reliable teamwork & collaboration approach</li>
                    <li>Positive, self-motivated attitude</li>
                </ul>
            </section>
        </div>

        <section id="hobbies">
            <h2>Hobbies</h2>
            <div class="badge-list">
                <span class="badge">🌐 Learning New Technologies</span>
                <span class="badge">📖 Reading</span>
                <span class="badge">⚽ Playing Sports</span>
                <span class="badge">💻 Exploring Coding Projects</span>
            </div>
        </section>

        <!-- Formal Declaration Box -->
        <section id="declaration">
            <h2>Declaration</h2>
            <div class="declaration-box">
                <p>"I hereby declare that the above information is true and correct to the best of my knowledge."</p>
                <div class="dec-meta">
                    <div>
                        <p>Place: Bangalore, Karnataka</p>
                        <p>Date: 12/06/2026</p>
                    </div>
                    <div style="text-align: right;">
                        <p style="border-top: 1px solid #333; width: 150px; margin-top: 25px; padding-top: 5px;">Signature: Kartik</p>
                    </div>
                </div>
            </div>
        </section>

        <!-- Contact Options -->
        <section id="contact" style="text-align: center; background: #eef2f3;">
            <h2>Let's Connect</h2>
            <p>Feel free to reach out for student collaborations, open-source projects, or tech meetups around Bangalore.</p>
            <div class="links">
                <a href="mailto:your-email@example.com">Email Me</a>
                <a href="https://github.com" target="_blank">GitHub Profile</a>
                <a href="https://linkedin.com" target="_blank">LinkedIn</a>
            </div>
        </section>

    </div>

    <footer>
        <p>&copy; 2026 Kartik | Built with HTML & CSS</p>
    </footer>

</body>
</html>
