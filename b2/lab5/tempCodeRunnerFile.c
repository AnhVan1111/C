int result = binarySearch(newArray, size, v);
    if (result == -1) {
        printf("\nNot found");
    }
    else {
        printf("\nItem is found at index %d", result);
    }

    return 0;