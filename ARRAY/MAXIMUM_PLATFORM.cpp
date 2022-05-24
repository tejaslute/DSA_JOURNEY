{
//Sort independently because we are interested in timestamps only
//we are not interested in specific train...
sort(arr, arr + n);
sort(dep, dep + n);

int platform = 1, max_platform = 1;
int i = 1, j = 0;

while (i < n && j < n) {
    //train is already standing in platform
    if (arr[i] <= dep[j]) {
        platform++;
        i++;
    }

    //train left
    else if (arr[i] > dep[j]) {
        platform--;
        j++;
    }

    //max platform used
    max_platform = max(platform, max_platform);
}
return max_platform;
   }