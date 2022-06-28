# HTML Tags builder
### Example
```c++
    Builder b{"ul"};
    b.add_child("li", "hello");
    b.add_child("li", "world");

    cout << b.str() << endl;
```
### Output
```
<ul>
  <li>
    hello
  </li>
  <li>
    world
  </li>
</ul>
```
