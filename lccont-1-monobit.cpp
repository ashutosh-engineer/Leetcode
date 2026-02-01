  int count = 1; // 0 hamesha monobit hota hai

        int val = 1;   // binary: 1
        while (val <= n) {
            count++;
            val = (val << 1) | 1; 
            // left shift + last me 1 add
            // 1 -> 3 -> 7 -> 15 ...
        }

        return count;
    }