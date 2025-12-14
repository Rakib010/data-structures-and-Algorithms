📘 Linear Time Complexity — O(n)
🔹 Definition

Linear Time Complexity (O(n)) মানে হলো —

input size n যত বাড়ে, algorithm এর execution time সরাসরি proportional ভাবে বাড়ে।

📌 input দ্বিগুণ → time দ্বিগুণ
📌 input ১০ গুণ → time ১০ গুণ

🔹 Why it’s called “Linear”?

কারণ input (n) এবং time এর relationship একটি straight line (linear graph) তৈরি করে।

🔹 Simple Example
for (let i = 0; i < n; i++) {
  console.log(i);
}


loop চলে n বার

প্রতি iteration এ constant কাজ
👉 Time Complexity = O(n)

🔹 Real-life Analogy

একটা classroom এ কাউকে খোঁজা:

1 জন → 1 বার দেখা

100 জন → 100 বার দেখা

👉 একে একে সবাইকে check করা = Linear process

🔹 Common Use Cases

O(n) দেখা যায় যখন:

array traverse করা

max / min খোঁজা

sum / count করা

linear search করা

🔹 Linear Search Example
function linearSearch(arr, target) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) return i;
  }
  return -1;
}

Case Analysis:

Best case → O(1) (first element)

Worst case → O(n) (last / not found)

📌 Big-O সবসময় worst case ধরে

🔹 Multiple Loops Rule
✅ Sequential Loops
for (let i = 0; i < n; i++) {}
for (let j = 0; j < n; j++) {}


Total = n + n = 2n
👉 O(n) (constant ignored)

❌ Nested Loops
for (let i = 0; i < n; i++) {
  for (let j = 0; j < n; j++) {}
}


Total = n × n
👉 O(n²) (Not linear)

🔹 When O(n) is Good?

✔️ Acceptable for large inputs
✔️ Very common in real applications
✔️ Safe in interviews

🔹 Limitations

n খুব বড় হলে (e.g. 10⁹), O(n) slow হতে পারে

তখন O(log n) বা O(1) preferred

🔹 Common Mistakes

❌ “একটা loop মানেই O(n)”
➡️ loop কতবার চলছে সেটা দেখতে হবে

❌ “early return থাকলে O(1)”
➡️ worst case consider করতে হয়

🔹 Interview One-Liner 🧠

“This solution runs in O(n) time because it processes each element exactly once.”

🔹 Final Summary

O(n) = Linear Time Complexity

input বাড়লে time proportional ভাবে বাড়ে

single traversal based

scalable & interview-friendly

worst case always considered