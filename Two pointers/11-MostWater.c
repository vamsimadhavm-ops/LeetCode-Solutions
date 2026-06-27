int maxArea(int* height, int heightSize) {
    int i = 0,  j = heightSize - 1;
    int h = 0,width = 0, maxarea = 0;
    while (i < j){
        if (height[i] < height[j]){
            h = height[i];
        }
        else{
            h = height[j];
        }
        width = j - i;
        int area = width * h;
        if (area > maxarea){
            maxarea = area;
        }
        if (height[i] < height[j]){
            i++;
        }else{
            j--;
        }

    }
    return maxarea;
    
}