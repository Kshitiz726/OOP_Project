//walkthrough for project development and proposal

neurons : 
number starts with 28 x 28 grid of pixels, in the program
each grid is neuron (784 neuurons here )

each neuron holds anumber , that starts from 0(black pixel) to 1(white pixel)
this number is called activation


784 neuron ko first layer huncha
last layer ma 10 ota neuron matra huncha
first ra last ko bichma, couple of neurons layer haru huncha (hidden layers)

activation in this neuron (last neuron layer ma) , represents how much the system thinks it is the given number

last neuron layer ma, 10 ota neuron huncha, 0 to 9, manam , eti mero, 5 ko activation is 0.8 (which is highest among all other 9 neuron) , then the system will tell that the written number represents 5


in our project, we will use two neuron layers with 16 neurons in each

network operates such that, activation in one layer impacts the activation in another layer


WHY THE LAYERS?
 first layer of neuron ma , lights on ko activation huncha //first layer

 ////second layer///// first layer ko  activation le 2nd  neuron layer ma impact garcha, ra, edges kun type ho vanne vancha

 //third layer// 2nd ko kunai edges combine garda, pattern bancha, ra tyo pattern ko certain activation bata decide huncha, kun pattern ho vanne (junko activation high huncha, tei pattern ho)

 //last layer/// last layer ma , tyo pattern (here , 2) ko activation le influence garda, kun activation high huncha (0 to 9), tei nai mero number ho

 example, in number 8, we have two 0s (circle like), so here , the first layer will detect all the neurons
 the 2nd layer will decide the edges
 the 3rd layer will recognize, that those edgy imperfect figure most probably represents two 0s pattern
 the final layer will recognize , what those two 0s pattern might form , (here 8)

 Wights are the like the knobs, that tie up the neurons from one layer to another
 while Biases, are the base of neuron activation (condition type)
 (example, the pixel will turn on if the activation value is something)


 Activation number of first layer's first neuron = a0^(0)
 Second layer's first neuron = a0^(1)
 First layer's second neuron = a1^(0)
and so on..

Weight of first layer's 2nd member = W 0,1

a0^(1) = σ [ (W 0,0 * a0^0) + (W 0,1 * a1^0) +.........+  (W 0,n  * a n^0) ] ---(i)

W induced layer ko kun member? , inducing layer ko kun member?
a member^(layer)

sigma is defined here to compress the activation within 0 to 1

σ = 1/(1+e^(-x)) function (if we see the graph of this function, on applying very positive input , the result is close to 1, while on applying very negative input, the result is close to 0 ) in this way, the activation is complexed in between 0 and 1


the equation (i) can be represented by matrix calculation
(refer to some image "matrix.jpg")

