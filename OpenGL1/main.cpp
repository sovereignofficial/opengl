#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#define M_PI 3.14159265358979323846

using namespace std;


int main(void)
{
	GLFWwindow* window;

	if (!glfwInit())
	{
		std::cout << "GLFW couldn't start!" << std::endl;
		return -1;
	}

	window = glfwCreateWindow(640, 480, "My Window", NULL, NULL);
	if (!window)
	{
		std::cout << "An error occured while initiating window!" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		glfwTerminate();
		return -1;
	}

	glClearColor(0.0f, 0.0f, 0.1f, 0);


	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);


		//glBegin(GL_POINTS);
		//glVertex3f(0.0f, 0.0f, 0.0f);
		//glEnd();


		//glBegin(GL_LINES);
		//glVertex3f(-0.5f, -0.5f, 0.0f);
		//glVertex3f(0.5f, 0.5f, 0.0f);
		//glEnd();

		//glBegin(GL_TRIANGLES);
		//glVertex3f(-0.5f, -0.5f, 0.0f);
		//glVertex3f(0.5f, -0.5f, 0.0f);
		//glVertex3f(0.0f, 0.5f, 0.0f);
		//glEnd();


		//glBegin(GL_TRIANGLE_STRIP);

		//// First triangle
		//glColor3f(1.0f, 0.0f, 0.0f); // Red
		//glVertex3f(-0.5f, -0.5f, 0.0f);
		//glVertex3f(0.5f, -0.5f, 0.0f);
		//glVertex3f(-0.5f, 0.5f, 0.0f);

		//// Second triangle
		//glColor3f(0.0f, 1.0f, 0.0f); // Green
		//glVertex3f(0.5f, -0.5f, 0.0f);
		//glVertex3f(0.5f, 0.5f, 0.0f);
		//glVertex3f(-0.5f, 0.5f, 0.0f);

		//glEnd();

		//float offset = 0.05f; // Offset value

		//glBegin(GL_QUAD_STRIP);

		//// First quad
		//glColor3f(1.0f, 0.0f, 0.0f); // Red
		//glVertex3f(-0.5f + offset, -0.5f + offset, 0.0f);
		//glVertex3f(0.5f - offset, -0.5f + offset, 0.0f);
		//glVertex3f(-0.5f + offset, 0.5f - offset, 0.0f);
		//glVertex3f(0.5f - offset, 0.5f - offset, 0.0f);

		//// Second quad
		//glColor3f(0.0f, 1.0f, 0.0f); // Green
		//glVertex3f(0.5f + offset, -0.5f + offset, 0.0f);
		//glVertex3f(1.5f - offset, -0.5f + offset, 0.0f);
		//glVertex3f(0.5f + offset, 0.5f - offset, 0.0f);
		//glVertex3f(1.5f - offset, 0.5f - offset, 0.0f);

		//glEnd();




		//glBegin(GL_LINE_STRIP);

		//// First line
		//glColor3f(1.0f, 0.0f, 0.0f); // Red
		//glVertex3f(-0.5f, -0.5f, 0.0f);
		//glVertex3f(0.5f, -0.5f, 0.0f);

		//// Second line
		//glColor3f(0.0f, 1.0f, 0.0f); // Green
		//glVertex3f(-0.5f, 0.5f, 0.0f);
		//glVertex3f(0.5f, 0.5f, 0.0f);

		//glEnd();



		//glBegin(GL_LINE_LOOP);

		//// First line
		//glColor3f(1.0f, 0.0f, 0.0f); // Red
		//glVertex3f(-0.5f, -0.5f, 0.0f);
		//glVertex3f(0.5f, -0.5f, 0.0f);

		//// Second line
		//glColor3f(0.0f, 1.0f, 0.0f); // Green
		//glVertex3f(0.5f, -0.5f, 0.0f);
		//glVertex3f(0.5f, 0.5f, 0.0f);

		//// Third line
		//glColor3f(0.0f, 0.0f, 1.0f); // Blue
		//glVertex3f(0.5f, 0.5f, 0.0f);
		//glVertex3f(-0.5f, 0.5f, 0.0f);

		//// Fourth line
		//glColor3f(1.0f, 1.0f, 0.0f); // Yellow
		//glVertex3f(-0.5f, 0.5f, 0.0f);
		//glVertex3f(-0.5f, -0.5f, 0.0f);

		//glEnd();



		//glBegin(GL_QUADS);
		//glVertex3f(-0.5f, -0.5f, 0.0f);
		//glVertex3f(0.5f, -0.5f, 0.0f);
		//glVertex3f(0.5f, 0.5f, 0.0f);
		//glVertex3f(-0.5f, 0.5f, 0.0f);
		//glEnd();


		//glBegin(GL_POLYGON);

		//glBegin(GL_POLYGON);

		//// Vertices of the polygon
		//for (int i = 0; i <= 7; i++)
		//{
		//	float angle = 2 * M_PI * i / 7;
		//	glVertex2f(cos(angle), sin(angle));
		//}

		//glEnd();

		glBegin(GL_TRIANGLE_FAN);

		// Center of the fan
		glVertex3f(0.0f, 0.0f, 0.0f);

		// Colors for the vertices
		float colors[] = { 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f };

		// Vertices of the fan
		for (int i = 0; i <= 4; i++)
		{
			double angle = 2 * acos(-1) * i / 7;
			glColor3f(colors[i * 3], colors[i * 3 + 1], colors[i * 3 + 2]);
			glVertex2f(cos(angle), sin(angle));
		}

		glEnd();


		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}



	glfwTerminate();
	return 0;
}