# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWGV577A%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIEmPS9c%2B%2BiLM0ZbiLpC6dvX37e%2BwMLgcG8UVC6OnwUzrAiEAsnAZ%2BzGFgLuxd2TZSwdxi4V6H1qPGC4RkRvZmcbe0nUq%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDK7I3PS8Ey72zJBBYyrcAxgzrg%2F7%2Fgz16UIrkQeXrycDGujc4VFGsPKFl8Vs0H7oSOElFQmVO5glAIib0aN0wY9iQOD5uNrNI7g%2Bclz5zt9NCkFZKLyI96t7BcuawyZ%2BYsYaWR0JsGuXgJCzzc3xddZIQJs0%2BTlwf5SVlKd2M9zVF1qylZESanGoSHa8lh9wiQQVEE2757O8SzPh6JzjPXSrNCkHdb7q7ALOLhM7Qva9bNli6VislYF6G%2FvxakubUGAbGAvwbapj5xL4trUKijhpm2BYOhYUMRTEXsRfI%2BoIp1GZkhBEP5kMXC%2Fwe7ozMbUleACWfmegEP5tHTYQjCP9EnMirUXNYY1yx2ZBSLNCWZJqns%2Fbp%2Fpd1w8oDYvGhRISX9RQBDx%2FM7FSKLRf0SGgB6qGBts7cxyGm98GA18lE7BcvswOP1%2Bl%2FNNc3S2VKefq8a5tGwILKPE0TtgEdtTVoDSMaG2qlU7shjvkyvGtl%2BD%2FZDKedHHpqCL9CCV7awIDoHiJnwYyOYFgMZfiZBqLY2PDzZW2XVuUmcLtTEJo6aPo0SAY1qBwKdB50vgaEK378m9%2FPPmHLgpquIjnFJK49q%2Fc1WTqxNmEHgK8w%2F1SK3dm4JXhbsDwagCtshCm8g7TrD317MEHLFLvMMCO99cGOqUBT9SguP6Iv3X6tJwX%2FFpYf4RfpL0h9wid6ZRCB8KmShZ%2F1hUdX0SGd3VVnnpm5IhZGnNV6H1EC17nSYqSsZcQwIapZep0KUIhAf0dgPAx1uQz99GOhojj6i%2BAze%2Fg5EYuKBNr2fCGPdCTUkimNHmvdULTtZ%2FJaQvcctMISXDXjYGfICtJ3VxMdsibHOf2F6A8hqIyC8o%2FBYNWVzqXP6cqjHhFYW62&X-Amz-Signature=6b3ef52d410d8185538ee629ace687d0a404c286469fb26dbcf45e2bc1ed4250&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWGV577A%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIEmPS9c%2B%2BiLM0ZbiLpC6dvX37e%2BwMLgcG8UVC6OnwUzrAiEAsnAZ%2BzGFgLuxd2TZSwdxi4V6H1qPGC4RkRvZmcbe0nUq%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDK7I3PS8Ey72zJBBYyrcAxgzrg%2F7%2Fgz16UIrkQeXrycDGujc4VFGsPKFl8Vs0H7oSOElFQmVO5glAIib0aN0wY9iQOD5uNrNI7g%2Bclz5zt9NCkFZKLyI96t7BcuawyZ%2BYsYaWR0JsGuXgJCzzc3xddZIQJs0%2BTlwf5SVlKd2M9zVF1qylZESanGoSHa8lh9wiQQVEE2757O8SzPh6JzjPXSrNCkHdb7q7ALOLhM7Qva9bNli6VislYF6G%2FvxakubUGAbGAvwbapj5xL4trUKijhpm2BYOhYUMRTEXsRfI%2BoIp1GZkhBEP5kMXC%2Fwe7ozMbUleACWfmegEP5tHTYQjCP9EnMirUXNYY1yx2ZBSLNCWZJqns%2Fbp%2Fpd1w8oDYvGhRISX9RQBDx%2FM7FSKLRf0SGgB6qGBts7cxyGm98GA18lE7BcvswOP1%2Bl%2FNNc3S2VKefq8a5tGwILKPE0TtgEdtTVoDSMaG2qlU7shjvkyvGtl%2BD%2FZDKedHHpqCL9CCV7awIDoHiJnwYyOYFgMZfiZBqLY2PDzZW2XVuUmcLtTEJo6aPo0SAY1qBwKdB50vgaEK378m9%2FPPmHLgpquIjnFJK49q%2Fc1WTqxNmEHgK8w%2F1SK3dm4JXhbsDwagCtshCm8g7TrD317MEHLFLvMMCO99cGOqUBT9SguP6Iv3X6tJwX%2FFpYf4RfpL0h9wid6ZRCB8KmShZ%2F1hUdX0SGd3VVnnpm5IhZGnNV6H1EC17nSYqSsZcQwIapZep0KUIhAf0dgPAx1uQz99GOhojj6i%2BAze%2Fg5EYuKBNr2fCGPdCTUkimNHmvdULTtZ%2FJaQvcctMISXDXjYGfICtJ3VxMdsibHOf2F6A8hqIyC8o%2FBYNWVzqXP6cqjHhFYW62&X-Amz-Signature=b63ccdc4cf1506965f88063a4d87d02a052fb273660f08d2808f89f71beb600a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWGV577A%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIEmPS9c%2B%2BiLM0ZbiLpC6dvX37e%2BwMLgcG8UVC6OnwUzrAiEAsnAZ%2BzGFgLuxd2TZSwdxi4V6H1qPGC4RkRvZmcbe0nUq%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDK7I3PS8Ey72zJBBYyrcAxgzrg%2F7%2Fgz16UIrkQeXrycDGujc4VFGsPKFl8Vs0H7oSOElFQmVO5glAIib0aN0wY9iQOD5uNrNI7g%2Bclz5zt9NCkFZKLyI96t7BcuawyZ%2BYsYaWR0JsGuXgJCzzc3xddZIQJs0%2BTlwf5SVlKd2M9zVF1qylZESanGoSHa8lh9wiQQVEE2757O8SzPh6JzjPXSrNCkHdb7q7ALOLhM7Qva9bNli6VislYF6G%2FvxakubUGAbGAvwbapj5xL4trUKijhpm2BYOhYUMRTEXsRfI%2BoIp1GZkhBEP5kMXC%2Fwe7ozMbUleACWfmegEP5tHTYQjCP9EnMirUXNYY1yx2ZBSLNCWZJqns%2Fbp%2Fpd1w8oDYvGhRISX9RQBDx%2FM7FSKLRf0SGgB6qGBts7cxyGm98GA18lE7BcvswOP1%2Bl%2FNNc3S2VKefq8a5tGwILKPE0TtgEdtTVoDSMaG2qlU7shjvkyvGtl%2BD%2FZDKedHHpqCL9CCV7awIDoHiJnwYyOYFgMZfiZBqLY2PDzZW2XVuUmcLtTEJo6aPo0SAY1qBwKdB50vgaEK378m9%2FPPmHLgpquIjnFJK49q%2Fc1WTqxNmEHgK8w%2F1SK3dm4JXhbsDwagCtshCm8g7TrD317MEHLFLvMMCO99cGOqUBT9SguP6Iv3X6tJwX%2FFpYf4RfpL0h9wid6ZRCB8KmShZ%2F1hUdX0SGd3VVnnpm5IhZGnNV6H1EC17nSYqSsZcQwIapZep0KUIhAf0dgPAx1uQz99GOhojj6i%2BAze%2Fg5EYuKBNr2fCGPdCTUkimNHmvdULTtZ%2FJaQvcctMISXDXjYGfICtJ3VxMdsibHOf2F6A8hqIyC8o%2FBYNWVzqXP6cqjHhFYW62&X-Amz-Signature=6dc5e711b7c537d2743637a7afed65c90114f9c1a123e8106fccf5d26fedbc15&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466STQLCSQR%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQD%2BGZzXgS%2Frx3QmCB5rRb%2BX1BuowsdwqQe1djUci6hnuwIhAPI7nHxWGhSjKdW3%2BlOxApyfYF3QqZewBLEhcoO23RaSKv8DCAAQABoMNjM3NDIzMTgzODA1IgwonA20j7ID5JITbEYq3AOaRKSG9jXSmtvhmyG4j3W88hzLoGEVfrp9xOsBwOosg9l%2FrXKGzelaZFSMW2njTZabWEmSoRg7pN%2Byoh054JEGJYwSgkL6UQGosW4OgWuUn0%2F1DEkus%2FWMTpjJLEtSmdXZoO6m11XEMTjFlNhYcedff3cT6dCbYqeKk2saeEHkgftYsALNiUbi1t0dUUG2JJSxrTTKBxO6ROHrsxRLwL1jp0aVt5e%2Bu6iMOJLx%2FURftBoT3U8lLANZmEx7LdovyTecrc8lqK0HbRtfdt4lbXljUffeOuw7F1kMM4hilv%2FT4ZBla69JXngcFQPGti9Z9EBqgOp0wDK5vFMeMYZR9YBVuO9X%2FaUpncZXCyubKKKzTKnQRPsfe%2BsA%2BahsHUsvSt8e3UOgL3mQnZ9tlY1dNQBMkqmeFaCwIbpv9OA65RlEZysK7SPNfIiUEIYh9asAFZrSLwrIdcR4gboE%2BN3082hjXKarMNxKsJMMZHTp7isowNCOBL4wW5jIfy71P2MAiPoJd5ppFByel1VXeq8sxuETo8NUJZyQ5qm1AzztO0WOxsz42NwtvFb0SnV1NzVL6i97dxneGJT1%2BPORZrWhq1yDEqS%2FOmigrdPXzxP8S2VvBE3bhJI7w0V4qyBruDD4jffXBjqkAfEYDmXoeFImv4xn6VoOnNmY2radyi7%2BassBEVltbLNKHC3bQwTOQnXzndb6EVoNpSrSddwpp6%2FAk2TrQxhxZ%2BR2KGnVShHfM4UMpxSUbe7JEkd1BdGI4553VCWf8KRqt%2FX35PeBgrZeznp4vzoau5ROZqCMWUnLAtPo%2Bbgf%2F1XhNImKy593n9BQdEUGICtfrQwPQwTXH%2BSJWqMoas2j%2BCQQ%2FblE&X-Amz-Signature=1978bbc4905948d649256b1cd226661148e64db7adfb3c0909b2eab4b39ba0da&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466STQLCSQR%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQD%2BGZzXgS%2Frx3QmCB5rRb%2BX1BuowsdwqQe1djUci6hnuwIhAPI7nHxWGhSjKdW3%2BlOxApyfYF3QqZewBLEhcoO23RaSKv8DCAAQABoMNjM3NDIzMTgzODA1IgwonA20j7ID5JITbEYq3AOaRKSG9jXSmtvhmyG4j3W88hzLoGEVfrp9xOsBwOosg9l%2FrXKGzelaZFSMW2njTZabWEmSoRg7pN%2Byoh054JEGJYwSgkL6UQGosW4OgWuUn0%2F1DEkus%2FWMTpjJLEtSmdXZoO6m11XEMTjFlNhYcedff3cT6dCbYqeKk2saeEHkgftYsALNiUbi1t0dUUG2JJSxrTTKBxO6ROHrsxRLwL1jp0aVt5e%2Bu6iMOJLx%2FURftBoT3U8lLANZmEx7LdovyTecrc8lqK0HbRtfdt4lbXljUffeOuw7F1kMM4hilv%2FT4ZBla69JXngcFQPGti9Z9EBqgOp0wDK5vFMeMYZR9YBVuO9X%2FaUpncZXCyubKKKzTKnQRPsfe%2BsA%2BahsHUsvSt8e3UOgL3mQnZ9tlY1dNQBMkqmeFaCwIbpv9OA65RlEZysK7SPNfIiUEIYh9asAFZrSLwrIdcR4gboE%2BN3082hjXKarMNxKsJMMZHTp7isowNCOBL4wW5jIfy71P2MAiPoJd5ppFByel1VXeq8sxuETo8NUJZyQ5qm1AzztO0WOxsz42NwtvFb0SnV1NzVL6i97dxneGJT1%2BPORZrWhq1yDEqS%2FOmigrdPXzxP8S2VvBE3bhJI7w0V4qyBruDD4jffXBjqkAfEYDmXoeFImv4xn6VoOnNmY2radyi7%2BassBEVltbLNKHC3bQwTOQnXzndb6EVoNpSrSddwpp6%2FAk2TrQxhxZ%2BR2KGnVShHfM4UMpxSUbe7JEkd1BdGI4553VCWf8KRqt%2FX35PeBgrZeznp4vzoau5ROZqCMWUnLAtPo%2Bbgf%2F1XhNImKy593n9BQdEUGICtfrQwPQwTXH%2BSJWqMoas2j%2BCQQ%2FblE&X-Amz-Signature=4c3cbdd8b820d0642f2990192b7ddfe49631e32484b5f0c7200275aa6854adec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466STQLCSQR%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQD%2BGZzXgS%2Frx3QmCB5rRb%2BX1BuowsdwqQe1djUci6hnuwIhAPI7nHxWGhSjKdW3%2BlOxApyfYF3QqZewBLEhcoO23RaSKv8DCAAQABoMNjM3NDIzMTgzODA1IgwonA20j7ID5JITbEYq3AOaRKSG9jXSmtvhmyG4j3W88hzLoGEVfrp9xOsBwOosg9l%2FrXKGzelaZFSMW2njTZabWEmSoRg7pN%2Byoh054JEGJYwSgkL6UQGosW4OgWuUn0%2F1DEkus%2FWMTpjJLEtSmdXZoO6m11XEMTjFlNhYcedff3cT6dCbYqeKk2saeEHkgftYsALNiUbi1t0dUUG2JJSxrTTKBxO6ROHrsxRLwL1jp0aVt5e%2Bu6iMOJLx%2FURftBoT3U8lLANZmEx7LdovyTecrc8lqK0HbRtfdt4lbXljUffeOuw7F1kMM4hilv%2FT4ZBla69JXngcFQPGti9Z9EBqgOp0wDK5vFMeMYZR9YBVuO9X%2FaUpncZXCyubKKKzTKnQRPsfe%2BsA%2BahsHUsvSt8e3UOgL3mQnZ9tlY1dNQBMkqmeFaCwIbpv9OA65RlEZysK7SPNfIiUEIYh9asAFZrSLwrIdcR4gboE%2BN3082hjXKarMNxKsJMMZHTp7isowNCOBL4wW5jIfy71P2MAiPoJd5ppFByel1VXeq8sxuETo8NUJZyQ5qm1AzztO0WOxsz42NwtvFb0SnV1NzVL6i97dxneGJT1%2BPORZrWhq1yDEqS%2FOmigrdPXzxP8S2VvBE3bhJI7w0V4qyBruDD4jffXBjqkAfEYDmXoeFImv4xn6VoOnNmY2radyi7%2BassBEVltbLNKHC3bQwTOQnXzndb6EVoNpSrSddwpp6%2FAk2TrQxhxZ%2BR2KGnVShHfM4UMpxSUbe7JEkd1BdGI4553VCWf8KRqt%2FX35PeBgrZeznp4vzoau5ROZqCMWUnLAtPo%2Bbgf%2F1XhNImKy593n9BQdEUGICtfrQwPQwTXH%2BSJWqMoas2j%2BCQQ%2FblE&X-Amz-Signature=651bc79564b483317dd74b9eff7d815acaa5d1214ea39fc387d0306fae50a69c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466STQLCSQR%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQD%2BGZzXgS%2Frx3QmCB5rRb%2BX1BuowsdwqQe1djUci6hnuwIhAPI7nHxWGhSjKdW3%2BlOxApyfYF3QqZewBLEhcoO23RaSKv8DCAAQABoMNjM3NDIzMTgzODA1IgwonA20j7ID5JITbEYq3AOaRKSG9jXSmtvhmyG4j3W88hzLoGEVfrp9xOsBwOosg9l%2FrXKGzelaZFSMW2njTZabWEmSoRg7pN%2Byoh054JEGJYwSgkL6UQGosW4OgWuUn0%2F1DEkus%2FWMTpjJLEtSmdXZoO6m11XEMTjFlNhYcedff3cT6dCbYqeKk2saeEHkgftYsALNiUbi1t0dUUG2JJSxrTTKBxO6ROHrsxRLwL1jp0aVt5e%2Bu6iMOJLx%2FURftBoT3U8lLANZmEx7LdovyTecrc8lqK0HbRtfdt4lbXljUffeOuw7F1kMM4hilv%2FT4ZBla69JXngcFQPGti9Z9EBqgOp0wDK5vFMeMYZR9YBVuO9X%2FaUpncZXCyubKKKzTKnQRPsfe%2BsA%2BahsHUsvSt8e3UOgL3mQnZ9tlY1dNQBMkqmeFaCwIbpv9OA65RlEZysK7SPNfIiUEIYh9asAFZrSLwrIdcR4gboE%2BN3082hjXKarMNxKsJMMZHTp7isowNCOBL4wW5jIfy71P2MAiPoJd5ppFByel1VXeq8sxuETo8NUJZyQ5qm1AzztO0WOxsz42NwtvFb0SnV1NzVL6i97dxneGJT1%2BPORZrWhq1yDEqS%2FOmigrdPXzxP8S2VvBE3bhJI7w0V4qyBruDD4jffXBjqkAfEYDmXoeFImv4xn6VoOnNmY2radyi7%2BassBEVltbLNKHC3bQwTOQnXzndb6EVoNpSrSddwpp6%2FAk2TrQxhxZ%2BR2KGnVShHfM4UMpxSUbe7JEkd1BdGI4553VCWf8KRqt%2FX35PeBgrZeznp4vzoau5ROZqCMWUnLAtPo%2Bbgf%2F1XhNImKy593n9BQdEUGICtfrQwPQwTXH%2BSJWqMoas2j%2BCQQ%2FblE&X-Amz-Signature=b2d9fd1e5a9083ea0515bbb4940b5df00f45127ac01aa6212df0caa722dedd67&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664FBMCOMG%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIFyDS7tUEFf2z1c81mZGrWR6SHoW2ObHIDWi18w0eQzUAiEA4kRmoSTSsXBM%2FJpdpVHf%2FCE8XjE1HmD2xsa2SGWlRFIq%2FwMIABAAGgw2Mzc0MjMxODM4MDUiDBeLpCXSVNqhOCVkxircA25IWirQHnt5zV9qtVVnpd5KRhpV%2FL2GLKkLzgvLcWWtWo85DuTrtKm5QTVc%2B3qJw1G938HGx22o6TpPXuocCoIDzK31FMbm0QrC6K1RgWg7XnPJ6rnFOgVovLOPqlezPNuZ1dqfjx12mwI75UOsbCH%2FhUS5k0Gq3YlIp98OShaIJmlkW7%2FGFQkfbmEsVxGKBT2TWUim%2BQMnraBPrXwpQBFGN%2B9UCfm3GWNWQ9ysqh%2FQ8FoECoAmi%2BUcxZLH1HQKr%2BHWe9mZ%2F31fn1%2BiaIEh1P5z%2F9GDmy9u1kYdxhVT585pr1bkye9%2BzElNdGlT4ju%2BYOy%2BanhDyGreVCjlQE9s2d2YrTVTkd0%2FzWeoCIucUdnwTkfDHlA2FH2Y%2FYJSVnDFkP45SZFv7MOQTi%2BYvQFCjiMlHpSfb%2F0s9RLyo5cSUvnWLN1F5aaegM9hxgreMh0WlAOP2VjN5pJRTVB3Cc7dIEvqGKpsD1okDxCA%2F42PWosyJf%2BmrFP%2F8VJL3CIc8c8UBHxpU4%2BKESdlaW1BBD3LJMrFEyR2FXsa0Q38ZSMMkIOmSbHcX5K6q4OouY22yJNo47ZbtqaWI4%2BjaMbn3kUM8oBNJDGvG%2FOUFaBSUf9OLT%2F29jxszm1qqcz3vSrOMPCP99cGOqUBnWVcPCUqLHQfcwz%2BBvLcDWDYcvZxoUfmMNfVw%2BWssLhuFtMKESNq7Hg%2Bcrb1yY5DKay37i%2BdSavJaMnouef%2B3R52S1lBdRtVje4OlyAopnhiu2y8waiVDGc3VjKiyEKNickWO9lG%2BRdb4LbEq%2FDKhwQof3aqqUdaT%2FjTSAAlGCVuiOtxs73hnmb3Di4lNN1JcB7IIzBh9whgaBMxbF2mwOgwT9Se&X-Amz-Signature=40a3ddb16cd4bda14c7a889d016f5c3efdab8269a9224dc5bfaa56b470baa5f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S3LK36YP%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQD9%2BZJS5ipC4jnk%2FSmg58NwVWHgE5i7%2F1tXvv6kmdbjeAIhAOGJ9pXlztQs9YLGgNylaA7XwvrKQNBfcSjrC49VRI%2BOKv8DCAAQABoMNjM3NDIzMTgzODA1IgzpCivPlohxL5QkBuQq3AM91U4E7ZDSjy5E8nmAS8SWB5bapzN0rK1Trn%2BR6CNoKSoOYY%2BBt6dr6TWgOw8FD7InNAEPiOuBE37fQK%2FwJobjff4co99Ws41c7nK8EDZJ%2FFS0p%2B0pYDOZHSfkNBIF8uD9dA9GHB1eKPEO2wTGBLI71hmdzETeQ9TE9hhENNuld5vpzLQ18W%2BBW%2BPJmWfPvHRSmMsvf9UTS2%2FAyR%2FL%2B61R0gg1uAkR%2FL4mD716PrvRfZQg%2BMo9PaoHkGBZ4dtG8mLX%2F0rfJ6EPoc6FrPg%2BUGDMUeOAcK%2FSn%2BHZFMFBHuWsu29yodhSkW5LCp%2B2lTyrTdeESezE9YzOcODQEgevLOTzaES%2BQmhpeF1SnefrfBT6t0JYqkO75zrRD2NzXBq%2BfjZSYRgWvZDZt%2FEKzG%2BR%2FHvsl5iaPL1R5nWlivB%2Bpb1zuwfW8xLD5yCkdT6yUyzevvFaZ9Zkpy%2B6W7beriNYUJRoZpSQy6xQJCGPrYyF9zlc0iAxaY9Vd6nsP2SrIqJ5BC9ixlcK7ef%2BEYrtPhlY%2FlAsd0oLPodHKrW%2FOgaCnVGdNI4L2jFhtaoeQhbyi8qq6doiPeW0zpGkQTIWrg4bUegfodRUekSM8bxOpWb9NkUDDfG8hzo3xrkDVbzZhzDvkPfXBjqkAV92x0S8TFcuMLKBtrW0bd6V50zaHgOmQrK8y0dfT2VEnN9gRblqzMTIGAwh%2FcdKgHELS4tvuGN03HAUQRb%2BdkcPJl5NhTNMphAbochRCjKVVbWA5h8zZOgvBOc2s%2FVbgRYEJytR%2BWjVNFW%2Bv9V3BdjhfvfdFHO5gIvHkhROBhhDog8xWZfYMdGfCr%2B8CsgzIOJDThF4J1t93rrEpSrePS1eqHfK&X-Amz-Signature=f80fa9e13c2c4f998c9ba50511401c23c3ffe159ee268698b59fada139f0bceb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S3LK36YP%2F20261118%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261118T165654Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQD9%2BZJS5ipC4jnk%2FSmg58NwVWHgE5i7%2F1tXvv6kmdbjeAIhAOGJ9pXlztQs9YLGgNylaA7XwvrKQNBfcSjrC49VRI%2BOKv8DCAAQABoMNjM3NDIzMTgzODA1IgzpCivPlohxL5QkBuQq3AM91U4E7ZDSjy5E8nmAS8SWB5bapzN0rK1Trn%2BR6CNoKSoOYY%2BBt6dr6TWgOw8FD7InNAEPiOuBE37fQK%2FwJobjff4co99Ws41c7nK8EDZJ%2FFS0p%2B0pYDOZHSfkNBIF8uD9dA9GHB1eKPEO2wTGBLI71hmdzETeQ9TE9hhENNuld5vpzLQ18W%2BBW%2BPJmWfPvHRSmMsvf9UTS2%2FAyR%2FL%2B61R0gg1uAkR%2FL4mD716PrvRfZQg%2BMo9PaoHkGBZ4dtG8mLX%2F0rfJ6EPoc6FrPg%2BUGDMUeOAcK%2FSn%2BHZFMFBHuWsu29yodhSkW5LCp%2B2lTyrTdeESezE9YzOcODQEgevLOTzaES%2BQmhpeF1SnefrfBT6t0JYqkO75zrRD2NzXBq%2BfjZSYRgWvZDZt%2FEKzG%2BR%2FHvsl5iaPL1R5nWlivB%2Bpb1zuwfW8xLD5yCkdT6yUyzevvFaZ9Zkpy%2B6W7beriNYUJRoZpSQy6xQJCGPrYyF9zlc0iAxaY9Vd6nsP2SrIqJ5BC9ixlcK7ef%2BEYrtPhlY%2FlAsd0oLPodHKrW%2FOgaCnVGdNI4L2jFhtaoeQhbyi8qq6doiPeW0zpGkQTIWrg4bUegfodRUekSM8bxOpWb9NkUDDfG8hzo3xrkDVbzZhzDvkPfXBjqkAV92x0S8TFcuMLKBtrW0bd6V50zaHgOmQrK8y0dfT2VEnN9gRblqzMTIGAwh%2FcdKgHELS4tvuGN03HAUQRb%2BdkcPJl5NhTNMphAbochRCjKVVbWA5h8zZOgvBOc2s%2FVbgRYEJytR%2BWjVNFW%2Bv9V3BdjhfvfdFHO5gIvHkhROBhhDog8xWZfYMdGfCr%2B8CsgzIOJDThF4J1t93rrEpSrePS1eqHfK&X-Amz-Signature=dbe7885db8e853de3aa602b623cab167ea9b266fbbb2b1505cf3e08800ccca02&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
