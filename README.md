<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 20px;
            background-color: #f9f9f9;
        }
        .container {
            max-width: 800px;
            margin: 0 auto;
            padding: 20px;
            background-color: #fff;
            border: 1px solid #ddd;
            border-radius: 10px;
        }
        h1, h2 {
            color: #333;
        }
        ul {
            padding-left: 20px;
        }
        code {
            background-color: #f0f0f0;
            padding: 2px 4px;
            border-radius: 3px;
        }
    </style>
    <title>Get Next Line</title>
</head>
<body>
    <div class="container">
        <h1>Get Next Line</h1>
        <img src="resources/gnl-finalmark.png" width="350" alt="Final Mark">
        <p><strong>Summary:</strong> This project involves creating a function to read a line from a file descriptor.</p>

        <h2>Contents</h2>
        <ul>
            <li><a href="#goals">I. Goals</a></li>
            <li><a href="#instructions">II. Instructions</a></li>
            <li><a href="#mandatory">III. Mandatory Part</a></li>
            <li><a href="#bonus">IV. Bonus Part</a></li>
        </ul>

        <h2 id="goals">I. Goals</h2>
        <p>Learn about static variables and enhance C programming skills.</p>

        <h2 id="instructions">II. Instructions</h2>
        <ul>
            <li>Code must be in C and follow the Norm.</li>
            <li>No unexpected quits (segfault, etc.).</li>
            <li>Proper memory management required.</li>
            <li>Include a Makefile with rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>re</code>.</li>
            <li>Submit to the assigned git repository.</li>
        </ul>

        <h2 id="mandatory">III. Mandatory Part</h2>
        <p>Function: <code>get_next_line</code></p>
        <p>Prototype: <code>char *get_next_line(int fd);</code></p>
        <p>Files: <code>get_next_line.c</code>, <code>get_next_line_utils.c</code>, <code>get_next_line.h</code></p>
        <p>Description: Returns a line from a file descriptor.</p>

        <h2 id="bonus">IV. Bonus Part</h2>
        <p>Manage multiple file descriptors and use only one static variable.</p>
    </div>
</body>
</html>
