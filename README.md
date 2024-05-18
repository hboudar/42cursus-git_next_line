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
            line-height: 1.6;
        }
        h1, h2, h3 {
            color: #333;
        }
        .container {
            max-width: 800px;
            margin: 0 auto;
            padding: 20px;
            border: 1px solid #ddd;
            border-radius: 10px;
            background-color: #f9f9f9;
        }
        pre {
            background-color: #f0f0f0;
            padding: 10px;
            border-radius: 5px;
            overflow-x: auto;
        }
        code {
            font-family: Consolas, 'Courier New', Courier, monospace;
            background-color: #e6e6e6;
            padding: 2px 4px;
            border-radius: 3px;
        }
        ul {
            margin: 0;
            padding: 0 0 0 20px;
        }
    </style>
    <title>Get Next Line</title>
</head>
<body>
    <div class="container">
        <h1>Get Next Line</h1>
        <p><strong>Summary:</strong><br>This project is about programming a function that returns a line read from a file descriptor.</p>
        <p><strong>Version:</strong> 12</p>

        <h2>Contents</h2>
        <ul>
            <li><a href="#goals">I. Goals</a></li>
            <li><a href="#common-instructions">II. Common Instructions</a></li>
            <li><a href="#mandatory-part">III. Mandatory part</a></li>
            <li><a href="#bonus-part">IV. Bonus part</a></li>
            <li><a href="#submission">V. Submission and peer-evaluation</a></li>
        </ul>

        <h2 id="goals">Chapter I: Goals</h2>
        <p>This project will not only allow you to add a very convenient function to your collection, but it will also make you learn a highly interesting new concept in C programming: static variables.</p>

        <h2 id="common-instructions">Chapter II: Common Instructions</h2>
        <ul>
            <li>Your project must be written in C.</li>
            <li>Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.</li>
            <li>Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation.</li>
            <li>All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.</li>
            <li>If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags <code>-Wall</code>, <code>-Wextra</code> and <code>-Werror</code>, use <code>cc</code>, and your Makefile must not relink.</li>
            <li>Your Makefile must at least contain the rules <code>$(NAME)</code>, <code>all</code>, <code>clean</code>, <code>fclean</code> and <code>re</code>.</li>
            <li>To turn in bonuses to your project, you must include a rule <code>bonus</code> to your Makefile, which will add all the various headers, libraries, or functions that are forbidden in the main part of the project. Bonuses must be in a different file <code>_bonus.{c/h}</code> if the subject does not specify anything else. Mandatory and bonus part evaluation is done separately.</li>
            <li>If your project allows you to use your <code>libft</code>, you must copy its sources and its associated Makefile in a <code>libft</code> folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.</li>
            <li>We encourage you to create test programs for your project even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defense. Indeed, during the defense, you are free to use your tests and/or the tests of the peer you are evaluating.</li>
            <li>Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.</li>
        </ul>

        <h2 id="mandatory-part">Chapter III: Mandatory part</h2>
        <h3>Function name</h3>
        <p><code>get_next_line</code></p>
        
        <h3>Prototype</h3>
        <p><code>char *get_next_line(int fd);</code></p>

        <h3>Turn in files</h3>
        <p><code>get_next_line.c, get_next_line_utils.c, get_next_line.h</code></p>

        <h3>Parameters</h3>
        <ul>
            <li><code>fd</code>: The file descriptor to read from</li>
        </ul>

        <h3>Return value</h3>
        <ul>
            <li>Read line: correct behavior</li>
            <li><code>NULL</code>: there is nothing else to read, or an error occurred</li>
        </ul>

        <h3>External functions</h3>
        <p><code>read, malloc, free</code></p>

        <h3>Description</h3>
        <p>Write a function that returns a line read from a file descriptor.</p>
        <ul>
            <li>Repeated calls (e.g., using a loop) to your <code>get_next_line()</code> function should let you read the text file pointed to by the file descriptor, one line at a time.</li>
            <li>Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return <code>NULL</code>.</li>
            <li>Make sure that your function works as expected both when reading a file and when reading from the standard input.</li>
            <li>Please note that the returned line should include the terminating <code>\n</code> character, except if the end of file was reached and does not end with a <code>\n</code> character.</li>
            <li>Your header file <code>get_next_line.h</code> must at least contain the prototype of the <code>get_next_line()</code> function.</li>
            <li>Add all the helper functions you need in the <code>get_next_line_utils.c</code> file.</li>
            <li>Because you will have to read files in <code>get_next_line()</code>, add this option to your compiler call: <code>-D BUFFER_SIZE=n</code>. It will define the buffer size for <code>read()</code>. The buffer size value will be modified by your peer-evaluators and the Moulinette in order to test your code. We must be able to compile this project with and without the <code>-D BUFFER_SIZE</code> flag in addition to the usual flags. You can choose the default value of your choice.</li>
            <li>You will compile your code as follows (a buffer size of 42 is used as an example): <code>cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 &lt;files&gt;.c</code></li>
            <li>We consider that <code>get_next_line()</code> has an undefined behavior if the file pointed to by the file descriptor changed since the last call whereas <code>read()</code> didn’t reach the end of the file.</li>
            <li>We also consider that <code>get_next_line()</code> has an undefined behavior when reading a binary file. However, you can implement a logical way to handle this behavior if you want to.</li>
        </ul>

        <h2 id="bonus-part">Chapter IV: Bonus part</h2>
        <p>This project is straightforward and doesn’t allow complex bonuses. However, we trust your creativity. If you completed the mandatory part, give a try to this bonus part.</p>
        <p>Here are the bonus part requirements:</p>
        <ul>
            <li>Develop <code>get_next_line()</code> using only one static variable.</li>
            <li>Your <code>get_next_line()</code> can manage multiple file descriptors at the same time. For example, if
