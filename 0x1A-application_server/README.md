 0. Set up development with Python

## Mandatory

Let’s serve what you built for AirBnB clone v2 - Web framework on web-01. This task is an exercise in setting up your development environment, which is used for testing and debugging your code before deploying it to production.

### Requirements:

1. Make sure that task #3 of your SSH project is completed for web-01. The checker will connect to your servers.
2. Install the net-tools package on your server: `sudo apt install -y net-tools`
3. Git clone your AirBnB_clone_v2 on your web-01 server.
4. Configure the file web_flask/0-hello_route.py to serve its content from the route /airbnb-onepage/ on port 5000.
5. Your Flask application object must be named app (This will allow us to run and check your code).


# 1. Set up production with Gunicorn
## mandatory
Now that you have your development environment set up, let’s get your production application server set up with Gunicorn on web-01, port 5000. You’ll need to install Gunicorn and any libraries required by your application. Your Flask application object will serve as a WSGI entry point into your application. This will be your production environment. As you can see we want the production and development of your application to use the same port, so the conditions for serving your dynamic content are the same in both environments.
