# HTML Tags builder
#
#
## Example
### Input
```c++
    Builder b{"ul"};
    b.add_child("li", "hello");
    b.add_child("li", "world");

    std::cout << b.str() << std::endl;
```
```c++
    Builder b{"ul"};
    b.add_child("li", "hello").add_child("li", "world");

    std::cout << b.str() << std::endl;
```
### Output
```html
<ul>
  <li>
    hello
  </li>
  <li>
    world
  </li>
</ul>
```
