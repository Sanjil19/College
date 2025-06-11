## ✅ Differences Between `var`, `let`, and `const` in JavaScript

---

### 🔸 `var`
- **⛔ Outdated** – Avoid in modern JavaScript.
- **✅ Redeclaration Allowed**
    ```js
    var a = 10;
    var a = 20; // No error
    ```
- **🔁 Reassignable**
- **📦 Function-scoped**
    ```js
    var a = 10;
    {
        var a = 'Sanjil';
        document.writeln(a); // Sanjil
    }
    document.writeln(a); // Sanjil
    ```

---

### 🔹 `let`
- **🌟 Modern** – Introduced in ES6 (2015).
- **❌ Cannot be redeclared** in the same scope.
- **✅ Reassignable**
- **📌 Block-scoped**
    ```js
    let a = 10;
    {
        let a = 'Sanjil';
        document.writeln(a); // Sanjil
    }
    document.writeln(a); // 10
    ```

---

### 🔒 `const`
- **🔐 Constant** – Cannot be reassigned.
- **⚠ Must be initialized immediately**
    ```js
    const a;      // ❌ Error
    const a = 10; // ✅
    ```
- **📌 Block-scoped (same as `let`)**

---

### 📊 Summary Table

| Feature         | `var`                   | `let`              | `const`            |
|-----------------|--------------------------|---------------------|---------------------|
| Scope           | Function                | Block              | Block              |
| Redeclaration   | ✅ Yes                  | ❌ No              | ❌ No              |
| Reassignment    | ✅ Yes                  | ✅ Yes             | ❌ No              |
| Hoisting        | ✅ Yes *(undefined)*    | ✅ Yes *(TDZ\*)*   | ✅ Yes *(TDZ\*)*   |

> \*TDZ: **Temporal Dead Zone** – cannot access before declaration.
x