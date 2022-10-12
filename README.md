# Planning Algorithm
## 1. How to Use
### 1.1 Environment config
[Ubuntu20.04](https://ubuntu.com/)(recommend) or Ubunt18.04<br>
[CMake](https://cmake.org/)<br>
[OpenCV](https://docs.opencv.org/4.5.3/d7/d9f/tutorial_linux_install.html)(OpenCV4 recommend)

### 1.2 Build program
A* 
```
mkdir build
cd build
cmake ..
make 
./path_planning
```
RRT
```
mkdir build
cd build
cmake ..
make 
./path_planning_RRT
```
### 1.3 Supplementary Instruction
The rightward direction is the positive direction of the X-axis<br>
The downward direction is the positive direction of the Y-axis.

## 2. Taxonomy of motion planning techniques applied in automated driving scenarios
<table>
    <tr>
        <td>Algorithm group</td>
        <td width="200">Technique</td>
        <td>Technique description</td>
    </tr>
    <tr>
        <td rowspan="3">Graph search based planners</td>
        <td>Dijkstra's Algorithm</td>
        <td>
            Known nodes/cells search space with associated weights<br/>
            Grid and node/cells weights computation according to the environment
        </td>
    </tr>
    <tr>
        <td>A* algorithm family</td>
        <td>
            Anytime D* with Voronoi cost functions Hybrid-heuristics A*<br/>
            A* with Voronoi/Lattice enviroment represeantation. PAO*
        </td>
    </tr>
    <tr>
        <td>State Lattices</td>
        <td>
            Enviroment decomposed in a local variable grid, depending on the complexity of the maneuver<br/>
            Spatio-temporal lattices(considering time and velocity dimensions)
        </td>
    </tr>
    <tr>
        <td>Sampling based planners</td>
        <td>RRT</td>
        <td>
            Physical and logical bias are used to generate the random-tree<br/>
            Anytime planning with RRT*<br/>
            Trajectory coordination with RRT
        </td>
    </tr>
    <tr>
        <td rowspan="5">Interpolating curve planners</td>
        <td>Line and circle</td>
        <td>Road fitting and interpolation of known waypoints</td>
    </tr>
    <tr>
        <td>Clothoid Curves</td>
        <td>
            Piecewise trajectory generation with straight, clothoid and circular segments<br/>
            Off-line generation of clothoid primitives from which the best will be taken in on-line evaluation
        </td>
    </tr>
    <tr>
        <td>Polynomial Curves</td>
        <td>
            Cubic order polynomial curves<br/>
            Higher order polynomial curves
        </td>
    </tr>
    <tr>
        <td>Bezier Curves</td>
        <td>
            Selection of the optimal control points location for the situation in hand<br/>
            Rational Bezier curves impletation
        </td>
    </tr>
    <tr>
        <td>Spline Curves</td>
        <td>Polynomial piecewise implementation Basis splines(b-splines)</td>
    </tr>
    <tr>
        <td>Numerical optimization approaches</td>
        <td>Function optimization</td>
        <td>
            Trajectory generation optimizing parameters such as speed, steering speed, rollover constraints, lateral accelerations, jerk(lateral comort optimization), among others
        </td>
    </tr>
</table>
