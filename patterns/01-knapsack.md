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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZS2PV5P%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBywkzM0G5f9xoeQOzo%2FHmZIRYnkRAuylkob9wGR0VXnAiBgF06F47rET62l%2Bp2CBqj9cK%2BhBjA9z9cnZM9ketGw%2Byr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIM0%2BMyfO7g3ttDcrSTKtwDyzanx5xq5%2F3z%2Fu9H6%2FM1EWyHEFfd3F1WLwvr9jXl8cwy6OxPv%2FHYlhbh1cwJOofEJbCDpe%2BqTrYgnc%2Bj5VAMPc1fygBf8z64XbLLT%2FkuzHaXvniZ0c1t86M5z9tKD6%2BYA1arAReFqPo2QdyGGj4vil2M77SBdugsCLJIFdzhIpBwGjWkeumlvC0pqA8aR89kuzMz%2FrMLs2wGnfsI6ed1%2FM13d74BF2QFtJOoxetmPssFO0EQhtRa0B7umA78%2Fo4Du7bUtOvqcKqL9%2BKi3Zq396Q9KkPIYblDJTElr3%2FBuKQLV7YTY0HoNDxjPlgOzhQoFFVzqD%2BUsrUnmWSXsfqAN5c8GbEMR0caw978gIJ3D0ScNil3so8pxbvC8PAU7lixngieOqSUDaC5D6kq8FkHPw8pQ2xAGd0rfd1GQD5sxUcYyTYa6BiDgFnNkLaBewsxBddszgEQ3kWzKMTPpf0G69g%2F%2B71YDOOv6FMI2r57HB80uKzOtQu2qOSdVBFB4Hh2pl3m7mJCgyGGCTrEHKlBPZ3XI6yhH87isfxT%2BvHxhMNrBieJqt1QBaepZEYXyESjXlLIFQL0SOln%2FZw1NacYzjVweLelGMkUk8YcKiiro9p8bkinQ00Yw7w958Awuv%2Bt0gY6pgGAuGKrgCcqi0oJolNP9Rie0lccoAjbLJZtnopNBVTjLl%2BhabhO%2B8jrHPIWwk43OozbzBwgoeBifKy1CvGDiukd0eUTI%2Bxw2wiYLRiwb6IzHWe6b1vmJW%2FVz7JNupn7xowII2lsDH8yFKiiOehtI0exiBSM4RAdFS5LCuN3sNwecYqDQwFto3PtJqRmD2G2%2BU6GNi2%2BhNH1Bwl%2FDa95vrylT2c6lfuJ&X-Amz-Signature=25fd29a24dbcddf240f3670f85ef79dd402c5cd0f98f205be2364bac84bc8940&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZS2PV5P%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBywkzM0G5f9xoeQOzo%2FHmZIRYnkRAuylkob9wGR0VXnAiBgF06F47rET62l%2Bp2CBqj9cK%2BhBjA9z9cnZM9ketGw%2Byr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIM0%2BMyfO7g3ttDcrSTKtwDyzanx5xq5%2F3z%2Fu9H6%2FM1EWyHEFfd3F1WLwvr9jXl8cwy6OxPv%2FHYlhbh1cwJOofEJbCDpe%2BqTrYgnc%2Bj5VAMPc1fygBf8z64XbLLT%2FkuzHaXvniZ0c1t86M5z9tKD6%2BYA1arAReFqPo2QdyGGj4vil2M77SBdugsCLJIFdzhIpBwGjWkeumlvC0pqA8aR89kuzMz%2FrMLs2wGnfsI6ed1%2FM13d74BF2QFtJOoxetmPssFO0EQhtRa0B7umA78%2Fo4Du7bUtOvqcKqL9%2BKi3Zq396Q9KkPIYblDJTElr3%2FBuKQLV7YTY0HoNDxjPlgOzhQoFFVzqD%2BUsrUnmWSXsfqAN5c8GbEMR0caw978gIJ3D0ScNil3so8pxbvC8PAU7lixngieOqSUDaC5D6kq8FkHPw8pQ2xAGd0rfd1GQD5sxUcYyTYa6BiDgFnNkLaBewsxBddszgEQ3kWzKMTPpf0G69g%2F%2B71YDOOv6FMI2r57HB80uKzOtQu2qOSdVBFB4Hh2pl3m7mJCgyGGCTrEHKlBPZ3XI6yhH87isfxT%2BvHxhMNrBieJqt1QBaepZEYXyESjXlLIFQL0SOln%2FZw1NacYzjVweLelGMkUk8YcKiiro9p8bkinQ00Yw7w958Awuv%2Bt0gY6pgGAuGKrgCcqi0oJolNP9Rie0lccoAjbLJZtnopNBVTjLl%2BhabhO%2B8jrHPIWwk43OozbzBwgoeBifKy1CvGDiukd0eUTI%2Bxw2wiYLRiwb6IzHWe6b1vmJW%2FVz7JNupn7xowII2lsDH8yFKiiOehtI0exiBSM4RAdFS5LCuN3sNwecYqDQwFto3PtJqRmD2G2%2BU6GNi2%2BhNH1Bwl%2FDa95vrylT2c6lfuJ&X-Amz-Signature=b6ce776856f9235cd8b068e2bd0747d99f850617985f46e56e1c37f9495cbadc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZS2PV5P%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBywkzM0G5f9xoeQOzo%2FHmZIRYnkRAuylkob9wGR0VXnAiBgF06F47rET62l%2Bp2CBqj9cK%2BhBjA9z9cnZM9ketGw%2Byr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIM0%2BMyfO7g3ttDcrSTKtwDyzanx5xq5%2F3z%2Fu9H6%2FM1EWyHEFfd3F1WLwvr9jXl8cwy6OxPv%2FHYlhbh1cwJOofEJbCDpe%2BqTrYgnc%2Bj5VAMPc1fygBf8z64XbLLT%2FkuzHaXvniZ0c1t86M5z9tKD6%2BYA1arAReFqPo2QdyGGj4vil2M77SBdugsCLJIFdzhIpBwGjWkeumlvC0pqA8aR89kuzMz%2FrMLs2wGnfsI6ed1%2FM13d74BF2QFtJOoxetmPssFO0EQhtRa0B7umA78%2Fo4Du7bUtOvqcKqL9%2BKi3Zq396Q9KkPIYblDJTElr3%2FBuKQLV7YTY0HoNDxjPlgOzhQoFFVzqD%2BUsrUnmWSXsfqAN5c8GbEMR0caw978gIJ3D0ScNil3so8pxbvC8PAU7lixngieOqSUDaC5D6kq8FkHPw8pQ2xAGd0rfd1GQD5sxUcYyTYa6BiDgFnNkLaBewsxBddszgEQ3kWzKMTPpf0G69g%2F%2B71YDOOv6FMI2r57HB80uKzOtQu2qOSdVBFB4Hh2pl3m7mJCgyGGCTrEHKlBPZ3XI6yhH87isfxT%2BvHxhMNrBieJqt1QBaepZEYXyESjXlLIFQL0SOln%2FZw1NacYzjVweLelGMkUk8YcKiiro9p8bkinQ00Yw7w958Awuv%2Bt0gY6pgGAuGKrgCcqi0oJolNP9Rie0lccoAjbLJZtnopNBVTjLl%2BhabhO%2B8jrHPIWwk43OozbzBwgoeBifKy1CvGDiukd0eUTI%2Bxw2wiYLRiwb6IzHWe6b1vmJW%2FVz7JNupn7xowII2lsDH8yFKiiOehtI0exiBSM4RAdFS5LCuN3sNwecYqDQwFto3PtJqRmD2G2%2BU6GNi2%2BhNH1Bwl%2FDa95vrylT2c6lfuJ&X-Amz-Signature=4214a71e7aa6f8a13b6b0ffb36bbd2bfdfd577f47ed440c680949098d550d008&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U7C3OTCW%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIB%2Br1BE6XPbpb3ymZXh74T8faPfNLyCV0lrEu5%2FhCccPAiEA1hUl0veSBejQ5dTBrL2gj3eASiJTd3EOOmNHNuoJOgMq%2FwMIUxAAGgw2Mzc0MjMxODM4MDUiDE6jkDMCEJceSNGLfircA615s4IGPS9GLe0Sm7g8Ljqga4T6U0E1rkQOEEg%2Fn0h5PKE%2B%2BZl50KlgE%2FPy%2BtAu0tAekZGC47zXMIZ6hED0L8nKOGpX88pV%2BJYCgfv5zN%2B5UglsONssgMllWhgLFOlTeGAGpRK95%2F6TGjuzt7c37%2FBR4vo5ESTe2oxe9wfRQecE1dqox1govZ%2BOs51GJUd42nK0Lf5jM1gfmTDzrPnlWWyi3nuuaGTgeZRe%2FJIY%2ByQpcH9maSjsBKfvmrCXrXu76NvFgzFGUMVxhFBOahb1SI4Ls0PBzjCSO2JuGahogfD5Me3qBhlT%2BeV95ou%2FufhQChgMh4QIwxH1KmnDge7Qg2dmHBU85%2FNMPv%2Bo%2FpWG%2F%2FTEtwhGJoOa6deiu8Eu1ZTF%2FWxhDkrbfZB%2BZLJYM3eQCSAgNduAhpI%2BpgkRaTynlGR3N%2BDM3fdGiVwcVFAn0JxJzVmR12yBw2STjiR7KeftUWiQuFss7vSC5V9DNh5TgwFWYaw9OWW1c5hEhXuuwoEGHQDt5oW3EPD8ygTKDPOyMfzNlmUhKAZ9L4s9th8w8tfVkOxTX7eLI1mMlxOwnxosnzXk%2BwoWEoiOoGYW5oaCvh0mYCx9zxrT%2BUaNBZsXKAHATrPIknWgljq4jf%2F9MJmArtIGOqUByPyPDlF5VxQMm6JiO4SMoyOkobueiGdhVgHslgEwYaxYzTYP5ANrlA63xLbGwKMDGBJcugp6oPtdRvIDL2PLT9BfWr3YP%2BOHk9GKT1rF%2B2PYWHMy%2FZeUFwZof2lBcf1SMp2xCBTVFP6zwBJlJfFY3BP2o%2Fb3iFD%2BNRCL4E7h0WhL0XUG4bRNCidBClUE1ubRq4GVQtY4E4bHOc5rtxcWtIvqCJLt&X-Amz-Signature=36e8fcc62ef033f126b545dbff078cf5a2017152f3756ff2cbf91b842fc1fcd8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U7C3OTCW%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIB%2Br1BE6XPbpb3ymZXh74T8faPfNLyCV0lrEu5%2FhCccPAiEA1hUl0veSBejQ5dTBrL2gj3eASiJTd3EOOmNHNuoJOgMq%2FwMIUxAAGgw2Mzc0MjMxODM4MDUiDE6jkDMCEJceSNGLfircA615s4IGPS9GLe0Sm7g8Ljqga4T6U0E1rkQOEEg%2Fn0h5PKE%2B%2BZl50KlgE%2FPy%2BtAu0tAekZGC47zXMIZ6hED0L8nKOGpX88pV%2BJYCgfv5zN%2B5UglsONssgMllWhgLFOlTeGAGpRK95%2F6TGjuzt7c37%2FBR4vo5ESTe2oxe9wfRQecE1dqox1govZ%2BOs51GJUd42nK0Lf5jM1gfmTDzrPnlWWyi3nuuaGTgeZRe%2FJIY%2ByQpcH9maSjsBKfvmrCXrXu76NvFgzFGUMVxhFBOahb1SI4Ls0PBzjCSO2JuGahogfD5Me3qBhlT%2BeV95ou%2FufhQChgMh4QIwxH1KmnDge7Qg2dmHBU85%2FNMPv%2Bo%2FpWG%2F%2FTEtwhGJoOa6deiu8Eu1ZTF%2FWxhDkrbfZB%2BZLJYM3eQCSAgNduAhpI%2BpgkRaTynlGR3N%2BDM3fdGiVwcVFAn0JxJzVmR12yBw2STjiR7KeftUWiQuFss7vSC5V9DNh5TgwFWYaw9OWW1c5hEhXuuwoEGHQDt5oW3EPD8ygTKDPOyMfzNlmUhKAZ9L4s9th8w8tfVkOxTX7eLI1mMlxOwnxosnzXk%2BwoWEoiOoGYW5oaCvh0mYCx9zxrT%2BUaNBZsXKAHATrPIknWgljq4jf%2F9MJmArtIGOqUByPyPDlF5VxQMm6JiO4SMoyOkobueiGdhVgHslgEwYaxYzTYP5ANrlA63xLbGwKMDGBJcugp6oPtdRvIDL2PLT9BfWr3YP%2BOHk9GKT1rF%2B2PYWHMy%2FZeUFwZof2lBcf1SMp2xCBTVFP6zwBJlJfFY3BP2o%2Fb3iFD%2BNRCL4E7h0WhL0XUG4bRNCidBClUE1ubRq4GVQtY4E4bHOc5rtxcWtIvqCJLt&X-Amz-Signature=71df1ab340de6b4e02a98db64051e99269b41ddc9f274ca82d4473fe35189816&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U7C3OTCW%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIB%2Br1BE6XPbpb3ymZXh74T8faPfNLyCV0lrEu5%2FhCccPAiEA1hUl0veSBejQ5dTBrL2gj3eASiJTd3EOOmNHNuoJOgMq%2FwMIUxAAGgw2Mzc0MjMxODM4MDUiDE6jkDMCEJceSNGLfircA615s4IGPS9GLe0Sm7g8Ljqga4T6U0E1rkQOEEg%2Fn0h5PKE%2B%2BZl50KlgE%2FPy%2BtAu0tAekZGC47zXMIZ6hED0L8nKOGpX88pV%2BJYCgfv5zN%2B5UglsONssgMllWhgLFOlTeGAGpRK95%2F6TGjuzt7c37%2FBR4vo5ESTe2oxe9wfRQecE1dqox1govZ%2BOs51GJUd42nK0Lf5jM1gfmTDzrPnlWWyi3nuuaGTgeZRe%2FJIY%2ByQpcH9maSjsBKfvmrCXrXu76NvFgzFGUMVxhFBOahb1SI4Ls0PBzjCSO2JuGahogfD5Me3qBhlT%2BeV95ou%2FufhQChgMh4QIwxH1KmnDge7Qg2dmHBU85%2FNMPv%2Bo%2FpWG%2F%2FTEtwhGJoOa6deiu8Eu1ZTF%2FWxhDkrbfZB%2BZLJYM3eQCSAgNduAhpI%2BpgkRaTynlGR3N%2BDM3fdGiVwcVFAn0JxJzVmR12yBw2STjiR7KeftUWiQuFss7vSC5V9DNh5TgwFWYaw9OWW1c5hEhXuuwoEGHQDt5oW3EPD8ygTKDPOyMfzNlmUhKAZ9L4s9th8w8tfVkOxTX7eLI1mMlxOwnxosnzXk%2BwoWEoiOoGYW5oaCvh0mYCx9zxrT%2BUaNBZsXKAHATrPIknWgljq4jf%2F9MJmArtIGOqUByPyPDlF5VxQMm6JiO4SMoyOkobueiGdhVgHslgEwYaxYzTYP5ANrlA63xLbGwKMDGBJcugp6oPtdRvIDL2PLT9BfWr3YP%2BOHk9GKT1rF%2B2PYWHMy%2FZeUFwZof2lBcf1SMp2xCBTVFP6zwBJlJfFY3BP2o%2Fb3iFD%2BNRCL4E7h0WhL0XUG4bRNCidBClUE1ubRq4GVQtY4E4bHOc5rtxcWtIvqCJLt&X-Amz-Signature=192f43a14c45ed700b289a6264b3cb8eee27a0192ae17a7aecbf4d98db193d08&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U7C3OTCW%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIB%2Br1BE6XPbpb3ymZXh74T8faPfNLyCV0lrEu5%2FhCccPAiEA1hUl0veSBejQ5dTBrL2gj3eASiJTd3EOOmNHNuoJOgMq%2FwMIUxAAGgw2Mzc0MjMxODM4MDUiDE6jkDMCEJceSNGLfircA615s4IGPS9GLe0Sm7g8Ljqga4T6U0E1rkQOEEg%2Fn0h5PKE%2B%2BZl50KlgE%2FPy%2BtAu0tAekZGC47zXMIZ6hED0L8nKOGpX88pV%2BJYCgfv5zN%2B5UglsONssgMllWhgLFOlTeGAGpRK95%2F6TGjuzt7c37%2FBR4vo5ESTe2oxe9wfRQecE1dqox1govZ%2BOs51GJUd42nK0Lf5jM1gfmTDzrPnlWWyi3nuuaGTgeZRe%2FJIY%2ByQpcH9maSjsBKfvmrCXrXu76NvFgzFGUMVxhFBOahb1SI4Ls0PBzjCSO2JuGahogfD5Me3qBhlT%2BeV95ou%2FufhQChgMh4QIwxH1KmnDge7Qg2dmHBU85%2FNMPv%2Bo%2FpWG%2F%2FTEtwhGJoOa6deiu8Eu1ZTF%2FWxhDkrbfZB%2BZLJYM3eQCSAgNduAhpI%2BpgkRaTynlGR3N%2BDM3fdGiVwcVFAn0JxJzVmR12yBw2STjiR7KeftUWiQuFss7vSC5V9DNh5TgwFWYaw9OWW1c5hEhXuuwoEGHQDt5oW3EPD8ygTKDPOyMfzNlmUhKAZ9L4s9th8w8tfVkOxTX7eLI1mMlxOwnxosnzXk%2BwoWEoiOoGYW5oaCvh0mYCx9zxrT%2BUaNBZsXKAHATrPIknWgljq4jf%2F9MJmArtIGOqUByPyPDlF5VxQMm6JiO4SMoyOkobueiGdhVgHslgEwYaxYzTYP5ANrlA63xLbGwKMDGBJcugp6oPtdRvIDL2PLT9BfWr3YP%2BOHk9GKT1rF%2B2PYWHMy%2FZeUFwZof2lBcf1SMp2xCBTVFP6zwBJlJfFY3BP2o%2Fb3iFD%2BNRCL4E7h0WhL0XUG4bRNCidBClUE1ubRq4GVQtY4E4bHOc5rtxcWtIvqCJLt&X-Amz-Signature=75bf98d85a50889c2027c602e02aa6c56ecea735a0adadf98dee6bda4fad1a1a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WPXZUMQH%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120325Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDwQk5qZ5a31BvA5c9glmuKoLaCM0QaH4iu6Dsu6e2EdAiBSfWXyKgnlJ2bztb1XBJz5FRiliLuvu5kUopPkPAaH%2Fyr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIM655a1wPGlCBkGV%2B8KtwDLjwN2b%2FR0pTzf0y4tmrrry9LXc6Bsd%2FqhPKYC1HOqLdHMRnn6pfcwxyEUaBJpSc%2BQ%2F8G7%2FJoNvmpjR33ZJhc04Jz9UE3qgQZdcXx69UqtKLPt3xIRERhzStEsMaKvIIBwr7%2BGLAmS9KQkOOhhQNOFu8qloSVbWmLASk3EUr5%2FvF3pwzYCtux7sd4dylkkhWgZ%2Bpc4KKvP3GupiygLlb6WBQr%2FcCCkJ5w0qHYO6Oi9VlA2p0QortyXpSdAo49WEzdnaDCk1z%2BZxKif8hWialoLQDYZUpQNPUbwilaWSQ1opGtuUTJnBM9NA68%2FngK%2BqcUXvIXZKfDWqHVCYTZkoTVlUwc5DaTxwmpKDB3Mx59Gq1GbwGJVemla1tKl0G9HPOneiR8VAaY%2Fu5mY77JXlhWHh6jV23p6m6hQjZ0N6KOAOZILJuiT2XuwKSRoXoppT8qVfMWFiArpHDB1VhY6I2Jf2pPTuw2vqD4Wf43PEJaXbuDZ4DtMvtQfRo1QhxurXILE60LpIe3za6T71BlKATICEx%2Fwp8oRy90vKCXwv%2B%2Be3zepst706dK1pyCAQACuy%2BW71fXdwTuSA1A5EjKb7jRpiZOaWgldRNziZsLH3MM5RscdGR%2BoyXVcQsfFFAwuYGu0gY6pgHxlLaTaCdriT4obsoq0QtzlIKMLgzmVKweTbCzvxoguPVhylIJEVi79mhe%2BXbizBT%2FbwwVOW%2BcoODdwV2fgX1wjYJvm0yeJA1Fo4VlGeRPO00dlPJpvgSGEblxz%2FLT6NFYGei4m4R%2BwihFOFna6nuJ8JbDKbJQtzst5ZAmIet7d0tJsckhNhaJKIjY51%2FfIHRpUIOWRSJOSUzj6JFGYYTB6LValqJf&X-Amz-Signature=f16e4e2b17f6b0c6ac61d00a1b5b10774ab8c6292719745e723d5cad12b60591&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBOYECUE%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120326Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFiAPnQAewYt1MjNqq57KjSd9Oa8DCWX%2BHE2EssItgboAiAAiTfOFc5zsvzFkpCQfsEkd0zqadqi6dfrKqsq68pJbCr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIMBz93%2BZl7ytJ4OxQGKtwDmKa5TvhIJ%2Flbzd4uDXL6fD6uCeUMIvtI0NQvlCOL84fvfcJD2blqUkquVlr8qGAUa1hewnSCyIByLmwmdxi9E%2Fq8mxU6vGhl8J0fr546h9ubdnTbfz7vAV%2B%2BFfMQT8UrOOBWBZwpFNi7BqNKJpCvKH%2BydBucLVpsH06to6j1%2FLGGqJOg4vp2%2FaKNx7AAEzAhmOXDaU7jg%2B2K%2BKHBZ626AmVg9we3JxvVSxb46v3IMxLgzonegMPd1nZ3if27miFJoKbYFVcxFNCxV%2FDCPs83T2Y8dNG30Ph9ynwjwU1jgJsfiXe96JmJ00BGI9JjRI%2FxXnL1I1mz0sIj6mJPs4%2BTLpfMy7Bul6scJWQQ014HbGB93bvaPTfMxRVorCvUA9GhpP%2FRcvAH5XRLkRRtej7y%2BcgZV93L4H8UaGbTAlkmREQO57FOLpUjSJTAcQM5A8SdLVVJQiMEuJnF111FsE7EAMmfzs2QI8Xikt1Y%2FYfCRFCg3CwkIP1EZchUhtCk9hwpz6NHPWspv8qU%2Fc6cwiXCKDQ8wnXIeXPr2yyKoMjwYa2bcH6Nh%2BXGX6lGguYZMLOb02vd%2BYBQdBKGWBQNLrF2yFt8NgOvn%2FpHhV9mBQwD60YRsdVW0t%2BuwAtYkUQw74Cu0gY6pgEgzbKiWd1SZuNsWZO0rCcWnfNne%2FemOiIu32AVtF4H%2BP%2FoQwSFb6TNewMnhy2HNpl1nXDc2g27TuDief29J%2FGqT3uAQ1qV6aO65M0b9gVdiw7kKofRmdThsRU48GBxGXKY1iZe8A%2BL5O8tWs6QrRR7c%2Fe%2B%2FHcrMoFWXjSlSfoTMnorSqyM89yp46jlvBfNZbooIaRN8CrcMWLLxFi0Y5zuALkmFm8E&X-Amz-Signature=b4d7fb894654aabefacde5a6f7c3353a85c33fcef3bed62d34306ef831d98d19&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBOYECUE%2F20260706%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260706T120326Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFiAPnQAewYt1MjNqq57KjSd9Oa8DCWX%2BHE2EssItgboAiAAiTfOFc5zsvzFkpCQfsEkd0zqadqi6dfrKqsq68pJbCr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIMBz93%2BZl7ytJ4OxQGKtwDmKa5TvhIJ%2Flbzd4uDXL6fD6uCeUMIvtI0NQvlCOL84fvfcJD2blqUkquVlr8qGAUa1hewnSCyIByLmwmdxi9E%2Fq8mxU6vGhl8J0fr546h9ubdnTbfz7vAV%2B%2BFfMQT8UrOOBWBZwpFNi7BqNKJpCvKH%2BydBucLVpsH06to6j1%2FLGGqJOg4vp2%2FaKNx7AAEzAhmOXDaU7jg%2B2K%2BKHBZ626AmVg9we3JxvVSxb46v3IMxLgzonegMPd1nZ3if27miFJoKbYFVcxFNCxV%2FDCPs83T2Y8dNG30Ph9ynwjwU1jgJsfiXe96JmJ00BGI9JjRI%2FxXnL1I1mz0sIj6mJPs4%2BTLpfMy7Bul6scJWQQ014HbGB93bvaPTfMxRVorCvUA9GhpP%2FRcvAH5XRLkRRtej7y%2BcgZV93L4H8UaGbTAlkmREQO57FOLpUjSJTAcQM5A8SdLVVJQiMEuJnF111FsE7EAMmfzs2QI8Xikt1Y%2FYfCRFCg3CwkIP1EZchUhtCk9hwpz6NHPWspv8qU%2Fc6cwiXCKDQ8wnXIeXPr2yyKoMjwYa2bcH6Nh%2BXGX6lGguYZMLOb02vd%2BYBQdBKGWBQNLrF2yFt8NgOvn%2FpHhV9mBQwD60YRsdVW0t%2BuwAtYkUQw74Cu0gY6pgEgzbKiWd1SZuNsWZO0rCcWnfNne%2FemOiIu32AVtF4H%2BP%2FoQwSFb6TNewMnhy2HNpl1nXDc2g27TuDief29J%2FGqT3uAQ1qV6aO65M0b9gVdiw7kKofRmdThsRU48GBxGXKY1iZe8A%2BL5O8tWs6QrRR7c%2Fe%2B%2FHcrMoFWXjSlSfoTMnorSqyM89yp46jlvBfNZbooIaRN8CrcMWLLxFi0Y5zuALkmFm8E&X-Amz-Signature=1d1d30cc01e30d103526db1e7f96146b68ea0d1f0d42aefae43fd4ecd46e303c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
