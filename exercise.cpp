1 #include <iostream>
2 #include <cmath>
3 
4 using namespace std;
5 
6 int main()
7 {
8 int arrName[10]={45, 21,10,87,11,53,21,30,78,32};
9 // int multi[][3]={{1,3,6},{2,3,6},{7,8,9}};
10 int temp;
11 
12 cout<<">>>>";
13 for(int i=0; i<10; i++){
14 if(arrName[i]%2 ==0){
15 cout<<arrName[i]<< " is an even number"<<endl;
16 
17 }
18 else{
19 cout<<arrName[i]<< " is an odd number"<<endl;
20 }
21 }
22 cout<<"Without Reordering"<<endl;
23 cout<<"The middle number is :"<<arrName[10/2];
24 cout<<"With Reordering"<<endl;
25 for (int i =0; i<10; i++){
26 for (int j=i+1; j<10;j++){
27 if(arrName[i]>arrName[j]){
28 temp= arrName[i];
29 arrName[i]=arrName[j];
30 arrName[j]=temp;
31 
32 }
33 }
34 
35 }
36 for (int i=0; i<10; i++){
37 cout<<arrName[i]<<endl;
38 }
39 cout<<"The middle number is :"<<arrName[10/2];
40 cout<<" Mode Number is:";
41 // Mode Number
42 int maxCount=0;
43 int maxVal=0;
44 
45 for (int i=0; i<10-1;i++){
46 int counter =0;
47 for (int j=0;j<i;j++){
48 if (arrName[i]==arrName[j]){
49 counter++;
50 }
51 
52 }
53 if (counter>maxCount){
54 maxCount=counter;
55 maxVal=arrName[i];
56 }
57 
58 }
59 cout<<maxVal<<endl;
60 //Sum Array
61 int sumArray=0;
62 for(int i=0; i<10;i++){
63 
64 sumArray+= arrName[i];
65 }
66 cout<<"The Sum of the Array is : "<<sumArray<< endl;
67 
68 // Leaste element
69 int s=arrName[0];
70 for (int i=1; i<10; i++){
71 if(s>arrName[i]){
72 s=arrName[i];
73 }
74 }
75 cout<<"The Smallest Number is: "<<s<<endl;
76 //Highest Number
77 int h=arrName[0];
78 for (int i=1; i<10; i++){
79 if(h<arrName[i]){
80 h=arrName[i];
81 }
82 }
83 cout<<"The Highest Number is: "<<h<<endl;
84 
85 
86 cout<<"The Average Value of the Array is : "<<sumArray/10<< endl;
87 
88 //Reverse without sorting
89 int arrValues[10]={45, 21,10,87,11,53,21,30,78,32};
90 for(int i=0, j=10-1; i<10/2;i++,j--){
91 temp =arrValues[i];
92 arrValues[i]=arrValues[j];
93 arrValues[j]=temp;
94 }
95 cout<<"The Array Elements in Reverse Order Without SOrting"<<endl;
96 for(int i=0;i<10;i++){
97 cout<<arrValues[i]<<endl;
98 }
99 //Reverse After Sorting
100 for(int i=0, j=10-1; i<10/2;i++,j--){
101 temp =arrName[i];
102 arrName[i]=arrName[j];
103 arrName[j]=temp;
104 }
105 cout<<"The Array Elements in Reverse Order after sorting"<<endl;
106 for(int i=0;i<10;i++){
107 cout<<arrName[i]<<endl;
108 }
109 
110 //D
111 
112 int matrix[4][3] = {{2,1,4},{9,8,6},{0,3,1},{6,4,3}};
113 
114 double rowSum=0.0;
115 int rowSumAvg;
116 double colSum=0.0;
117 int colSumAvg;
118 
119 //Row Sum
120 
121 for(int i=0;i<4;i++){
122 for(int j=0;j<3;j++){
123 rowSum+= matrix[i][j];
124 
125 }
126 
127 }
128 cout<<"The Row Sum is: "<<rowSum<<endl;
129 cout<<"The Row Average is: "<<rowSum/4<<endl;
130 //Column Sum
131 
132 for(int i=0;i<3;i++){
133 for(int j=0;j<4;j++){
134 colSum+= matrix[j][i];
135 
136 }
137 
138 }
139 cout<<"The Col Sum is: "<<colSum<<endl;
140 cout<<"The Col Average is: "<<colSum/3<<endl;
141 
142 //Inverse
143 cout<<"The Transpose of the Matric is: "<<endl;
144 for(int i=0;i<3;i++){
145 for(int j=0;j<4;j++){
146 cout<<matrix[j][i]<<" ";
147 }
148 cout<<endl;
149 }
150 
151 // to solve the inverse of a matrix, the row and column size must be the same
152 
153 
154 //2, Phone Store
155 int choice;
156 cout<<"Welcome to Our Store"<<endl;
157 cout<<"Kindly Select your phone choice"<<endl;
158 cout<<"1-->Moderate Battery\t Low Battery<<--2"<<endl;
159 cout<<"3--> High Battery"<<endl;
160 cin>>choice;
161 cout<<"This are the List of Phones in this categories"<<endl;
162 
163 switch(choice){
164 case 1:
165 cout<<"Samsung A70"<<endl;
166 cout<<"Samsung A72"<<endl;
167 cout<<"Infinix S10"<<endl;
168 cout<<"Redmi 8"<<endl;
169 break;
170 case 2:
171 cout<<"Iphone 7"<<endl;
172 cout<<"Iphone 8"<<endl;
173 cout<<"Udigmi 7s"<<endl;
174 cout<<"Pixel note 10"<<endl;
175 break;
176 case 3:
177 cout<<" Itel A12"<<endl;
178 cout<<"Infinix note12"<<endl;
179 cout<<"Hauwei 3p"<<endl;
180 break;
181 default:
182 cout<<"Invalid Input"<<endl;
183 
184 }
185 
186 
187 //Equations
188 
189 double w=4.0;
190 double x=25.0;
191 double y=16.0;
192 double z=49.0;
193 //A=x3+5x3+3x2
194 double A,B,C;
195 double tSq,tD;
196 tSq=x*x*x;
197 tD=x*x;
198 A = tSq+ (5*tSq)+(3*tD);
199 cout<<" x3+5x3+3x2 Answer is: "<<A<<endl;
200 //B=(sqrt(x+4w)/(yw+wx))
201 double brac1, brac2;
202 brac1=x+(4*w);
203 brac2=(y*w)+(w*x);
204 brac1=sqrt(brac1);
205 B=brac1/brac2;
206 cout<<" (sqrt(x+4w)/(yw+wx)) Answer is: "<<B<<endl;
207 //C sine(y+z)-cosine(y-z))/tan(x)
208 brac1=sin(y+z);
209 brac2=cos(y-z);
210 brac1=brac1-brac2;
211 brac2=tan(x);
212 C=brac1/brac2;
213 cout<<" sine(y+z)-cosine(y-z))/tan(x) Answer is: "<<C<<endl;
214 
215 //Grade Prediction
216 int N=100;
217 int predict;
218 int scores[3]={0};
219 cout<<"Enter the Scores for last semester"<<endl;
220 for (int i=0; i<3;i++){
221 cout<<"Enter the score for course: "<<i+1<<": ";
222 
223 cin>>scores[i];
224 predict=rand()%N;
225 if(scores[i]-10>predict){
226 cout<<"Prediction for this Lecturer's Course is :"<<predict<<endl;
227 }
228 else{
229 cout<<"Prediction for this Lecturer's Course is :"<<predict+10<<endl;
230 }
231 
232 
233 }
234 
235 
236 
237 
238 
239 
240 
241 
242 
243 
244 
245 
246 
247 
248 
249 
250 
251 
252 
253 return 0;
254 }
255 
