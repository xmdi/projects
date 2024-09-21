function method1(c,E,I,w)
	# first 2 elements modeled as cantilever with end load
	# transverse deflections (PL^3/3EI) added together
	# and result doubled for symmetry.
	# Returns applied load P to cause w total deflection.

	d=c[2,:]-c[1,:];
	L1=sqrt(d[1]^2+d[2]^2);
	d=c[3,:]-c[2,:];
	L2=sqrt(d[1]^2+d[2]^2);

	P=(L1^3+L2^3)*(3*E*I*w)*.5;


end

# node coords in m
coordinates=[0 0
	     .01 .25
	     .1 .5
	     .25 .75
	     .5 .8
	     .75 .75
	     .9 .5
	     .99 .25
	     1 0];

E=69e9; # alum GPa
b=.05;
h=.02;
I=(b*h^3)/12;

using Plots;
p=plot(coordinates[:,1],coordinates[:,2],aspect_ratio=1);
display(p);
print(method1(coordinates,E,I,.10))

wait(Condition());



