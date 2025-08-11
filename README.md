create a TF1 class using the sin(x)/x function and draw it.

Create then a function with parameters, p0 * sin ( p1 * x) /x and also draw it for different parameter values. You can try to change the parameter values using TF1::SetParameters or by using the ROOT GUI. Try also to change the style of the line and its color. You can either use the ROOT GUI and/or use the methods of the class TAttLine (see TAttLine reference documentation). Since TF1 derives from TAttLine, it inherits all its functions. Try for example to set the colour of the parametric function to blue.

After having drawn the function, compute for the parameter values (p0=1, p1=2):

    function value for x = 1.
    function derivative for x = 1
    integral of the function between 0 and 3. 
