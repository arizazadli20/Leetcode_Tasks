int maxArea(int* height, int heightSize) {

int left=0;
int right= heightSize - 1;
int maxArea=0;
int current_height=0;

while(left<right){

   if(height[left] < height [right]){

current_height=height[left];
   }
else {
    current_height = height [right] ;
}

int width=right-left;
int current_area= width*current_height;

if(current_area > maxArea){

    maxArea = current_area;
}

if (height[left] < height[right]) {
            left++; 
        } else {
            right--; 
        }
        
}

return maxArea;

}