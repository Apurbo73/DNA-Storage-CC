# DNA-Storage-CC


---

### 🔹 **1. Reading the number of test cases**

```cpp
int T;
cin >> T;
```

* The program starts by reading `T`, the number of test cases. This means the user will input `T` binary strings one after the other.

---

### 🔹 **2. Preparing to store the answers**

```cpp
vector<string> results;
```

* This `vector<string>` is used to **store the encoded strings** for each test case. We'll print them later, all at once.

---

### 🔹 **3. Looping through each test case**

```cpp
while (T--) {
```

* This loop will run `T` times—once for each test case.

Inside the loop:

```cpp
int N;
cin >> N;
string S;
cin >> S;
```

* Reads the length of the binary string (`N`) and the actual binary string (`S`). Since N is even, we can safely process the string two characters at a time.

---

### 🔹 **4. Encoding logic**

```cpp
string encoded = "";

for (int i = 0; i < N; i += 2) {
    char first = S[i];
    char second = S[i + 1];
```

* Initializes an empty string `encoded` to build the output.
* Loops through the binary string two characters at a time: `S[i]` and `S[i+1]`.

Now, we check each **pair of characters**:

```cpp
    if (first == '0' && second == '0') encoded += 'A';
    else if (first == '0' && second == '1') encoded += 'T';
    else if (first == '1' && second == '0') encoded += 'C';
    else if (first == '1' && second == '1') encoded += 'G';
```

* According to the given rules:

  * `00` → A
  * `01` → T
  * `10` → C
  * `11` → G

Each resulting character is added (`+=`) to the `encoded` string.

---

### 🔹 **5. Storing the result**

```cpp
results.push_back(encoded);
```

* Once the full string is encoded, it is added to the `results` vector.

---

### 🔹 **6. Printing all outputs**

```cpp
for (int i = 0; i < results.size(); i++) {
    cout << results[i] << endl;
}
```

* After all test cases are processed, the program prints each encoded result from the `results` vector on a new line.

---

### ✅ **Example Walkthrough:**

Input:

```
2
4
0011
6
101010
```

Step-by-step:

1. For `0011`:

   * "00" → A
   * "11" → G
     → Output: `AG`

2. For `101010`:

   * "10" → C
   * "10" → C
   * "10" → C
     → Output: `CCC`

Final output:

```
AG
CCC
```

