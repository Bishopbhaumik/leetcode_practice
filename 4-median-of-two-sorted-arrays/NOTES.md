median += nums1[i];
if (!odd) {
median /= 2;
}
break;
}
i++;
}
while (j < n) {
if (i + j == target - 1) {
if (!odd) {
median = nums2[j];
}
} else if (i + j == target) {
median += nums2[j];
if (!odd) {
median /= 2;
}
break;
}
j++;
}
return median;
}
};
```