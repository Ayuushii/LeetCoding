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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667P3ZNMVV%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125156Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCpY%2FYj%2FDaXdrNnDqKiQ6wZf8hkVkICOmDWr0IIbiNlHAIgRW%2BQU7z5BM9F7hsYWWwwzSjURZnmKOGzUBfSzdKGimoq%2FwMIdhAAGgw2Mzc0MjMxODM4MDUiDIDkeBhxriAnylGMtyrcA58hUK4vn2WfCq1ATRtxCC7ssqrcJ8n6kiD%2FREyOqwpqvGrlqcy3hIlfS6GaOmTNXe3Q0Rvs7kK7YRytPUSuehRogJwmaYRvVKfTaIooXpaq%2BmGrGuZwsYvIPHOT8OKoPEUj1V3m0Wlj81yqPT%2FBO01M8IrGzJ4qrhxeE3B6jIh8GkgJu1Ig9YhWgdyuKNYvkD73jnVt7fbBWYaeSrNrgqygy%2FNs4BqhBYFD4Z%2B%2FjXa0eik0cUu93AV2M%2BUa5s91d8IRukk4o3YBUB4wV7WtCX7trkjvA8qHw%2BqrDfYbjvfxLtONw5oDV%2Bz7J0YwaDXZo052k0RCZWUWn%2BJs1oSgsBRqRDjoWf0XHbwgNjXVAMLwrcLgfAE9knDVwv%2Fd%2F9xX%2FkPyYroaDE7PM6rCQfqCI%2FkqPs1xAlNsJrgBiBTl5vkyGKxcZWgzpftQLKogkiFLJbOsl5x2F7v3baCIhjOnch4z6sofoU8X%2BHUy%2F0o41gGV6ZemUiXyfcvvQODt43Ur1pVJXSISviMOlNUixFLKA5%2FwRukPrWVSN2sFWF2UApg39%2FeMvuYDaD5Q1rKDq4h9KzKz%2BEwYv1LfIs7elVBYUbP05lDkvyRqJQU5NitM%2BMRvyQgcyXldkY6FOBClMJ6GxdEGOqUBAz0GOIt37ru86KH2vU7XLU4%2F0QW5HTBy%2BjaOBujZ6fQ5I9au%2Bol4r%2ByAkQ%2BWq6Y4H5GfXputgJ7nOOM6aGZ5HJhuJY6FMq5HOtTomDxACXvk9fgPdMszygQgo7brv1OK%2FObTzQaRTel1PAs55LBMGnMn9CZs38oCxM8XXOZ1xLBpqz9m59SYCjW0lUcpp8cF8q6V%2BGRxeyTjlDl8DhyMP6l8idrX&X-Amz-Signature=eae08d1989dd48726b3072ea7567a99b9ca535fd44f8aa7b740a8e76769ceac8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667P3ZNMVV%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125156Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCpY%2FYj%2FDaXdrNnDqKiQ6wZf8hkVkICOmDWr0IIbiNlHAIgRW%2BQU7z5BM9F7hsYWWwwzSjURZnmKOGzUBfSzdKGimoq%2FwMIdhAAGgw2Mzc0MjMxODM4MDUiDIDkeBhxriAnylGMtyrcA58hUK4vn2WfCq1ATRtxCC7ssqrcJ8n6kiD%2FREyOqwpqvGrlqcy3hIlfS6GaOmTNXe3Q0Rvs7kK7YRytPUSuehRogJwmaYRvVKfTaIooXpaq%2BmGrGuZwsYvIPHOT8OKoPEUj1V3m0Wlj81yqPT%2FBO01M8IrGzJ4qrhxeE3B6jIh8GkgJu1Ig9YhWgdyuKNYvkD73jnVt7fbBWYaeSrNrgqygy%2FNs4BqhBYFD4Z%2B%2FjXa0eik0cUu93AV2M%2BUa5s91d8IRukk4o3YBUB4wV7WtCX7trkjvA8qHw%2BqrDfYbjvfxLtONw5oDV%2Bz7J0YwaDXZo052k0RCZWUWn%2BJs1oSgsBRqRDjoWf0XHbwgNjXVAMLwrcLgfAE9knDVwv%2Fd%2F9xX%2FkPyYroaDE7PM6rCQfqCI%2FkqPs1xAlNsJrgBiBTl5vkyGKxcZWgzpftQLKogkiFLJbOsl5x2F7v3baCIhjOnch4z6sofoU8X%2BHUy%2F0o41gGV6ZemUiXyfcvvQODt43Ur1pVJXSISviMOlNUixFLKA5%2FwRukPrWVSN2sFWF2UApg39%2FeMvuYDaD5Q1rKDq4h9KzKz%2BEwYv1LfIs7elVBYUbP05lDkvyRqJQU5NitM%2BMRvyQgcyXldkY6FOBClMJ6GxdEGOqUBAz0GOIt37ru86KH2vU7XLU4%2F0QW5HTBy%2BjaOBujZ6fQ5I9au%2Bol4r%2ByAkQ%2BWq6Y4H5GfXputgJ7nOOM6aGZ5HJhuJY6FMq5HOtTomDxACXvk9fgPdMszygQgo7brv1OK%2FObTzQaRTel1PAs55LBMGnMn9CZs38oCxM8XXOZ1xLBpqz9m59SYCjW0lUcpp8cF8q6V%2BGRxeyTjlDl8DhyMP6l8idrX&X-Amz-Signature=3b480f9ff3ee3ae2a20c5d5a8dd99b4623283bbfff1dab306b556292e1a83e70&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667P3ZNMVV%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125156Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCpY%2FYj%2FDaXdrNnDqKiQ6wZf8hkVkICOmDWr0IIbiNlHAIgRW%2BQU7z5BM9F7hsYWWwwzSjURZnmKOGzUBfSzdKGimoq%2FwMIdhAAGgw2Mzc0MjMxODM4MDUiDIDkeBhxriAnylGMtyrcA58hUK4vn2WfCq1ATRtxCC7ssqrcJ8n6kiD%2FREyOqwpqvGrlqcy3hIlfS6GaOmTNXe3Q0Rvs7kK7YRytPUSuehRogJwmaYRvVKfTaIooXpaq%2BmGrGuZwsYvIPHOT8OKoPEUj1V3m0Wlj81yqPT%2FBO01M8IrGzJ4qrhxeE3B6jIh8GkgJu1Ig9YhWgdyuKNYvkD73jnVt7fbBWYaeSrNrgqygy%2FNs4BqhBYFD4Z%2B%2FjXa0eik0cUu93AV2M%2BUa5s91d8IRukk4o3YBUB4wV7WtCX7trkjvA8qHw%2BqrDfYbjvfxLtONw5oDV%2Bz7J0YwaDXZo052k0RCZWUWn%2BJs1oSgsBRqRDjoWf0XHbwgNjXVAMLwrcLgfAE9knDVwv%2Fd%2F9xX%2FkPyYroaDE7PM6rCQfqCI%2FkqPs1xAlNsJrgBiBTl5vkyGKxcZWgzpftQLKogkiFLJbOsl5x2F7v3baCIhjOnch4z6sofoU8X%2BHUy%2F0o41gGV6ZemUiXyfcvvQODt43Ur1pVJXSISviMOlNUixFLKA5%2FwRukPrWVSN2sFWF2UApg39%2FeMvuYDaD5Q1rKDq4h9KzKz%2BEwYv1LfIs7elVBYUbP05lDkvyRqJQU5NitM%2BMRvyQgcyXldkY6FOBClMJ6GxdEGOqUBAz0GOIt37ru86KH2vU7XLU4%2F0QW5HTBy%2BjaOBujZ6fQ5I9au%2Bol4r%2ByAkQ%2BWq6Y4H5GfXputgJ7nOOM6aGZ5HJhuJY6FMq5HOtTomDxACXvk9fgPdMszygQgo7brv1OK%2FObTzQaRTel1PAs55LBMGnMn9CZs38oCxM8XXOZ1xLBpqz9m59SYCjW0lUcpp8cF8q6V%2BGRxeyTjlDl8DhyMP6l8idrX&X-Amz-Signature=fc95654e6de9ef239ef434038f8d2de00257fa98553804f1a4e9002423916725&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XZQTKDNE%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125156Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCDtXtMTUFmQAdyPWwQYMfHzm0A%2FMCQLcsiH8TZMA8kVgIhAJl5f4IS04zxy9riCtjQdk10iWvzpDcENpJdBc1LGAHcKv8DCHYQABoMNjM3NDIzMTgzODA1IgwL%2Bwqml2J%2FW2PJZioq3AP1A%2B7qcD7Q0EqTg08j5yajoAS1BeVMSfUfmwZHlnz%2BNMCcRs%2FAlr6HB0%2FFMIMfDLx2bpQy1wwXh%2BpD2w9RnsG5LYKfqABoEPyUiqIQKR0lYW%2FF%2BV7PfcKywRwsZVObZYfocciVXr7GXEskyTLu1hhqh4Lx%2Fyl1Cso30GwtFoq4G9b0S%2Bt2sxHvm1p%2FY6FkzUpQk0vaLjG%2BCdy3aeddMc5sZZmpdvkIcdun3lRPPBJWML3%2B%2B4gNnhAqrdfpTsICPy6qusqmhQs7NPTzMBnTlLwmXgwilRSpSM1cTQPLJLvDZbsP0LcZ7JsKxRAkqyEXbufWEecI86Ev%2FtEMqn9ILqTWIwjfCKnQW5SN%2F6V4HWZEiTa4eXA3BHm%2F8o9f6bTT3wIXeP%2FX7t2MC7VfMw5cryBq32Yp9pP7wR0LfEAoOR5152Mhd7AwPU%2Bs1a89gVzA%2FhUC16Dj9ePuobTob%2FpZkjfscf1jBoF6WsjAIkNzVbsCf8%2FJpDZZ9PBJLBZanpnF1oI3%2BR9BkdyOvhNOONKYJ3peVrfZiqFTePrBIL%2FGZX3hK1FlEVxZsIOUPgE2ufWqUQ7PSVU%2FMO9faAGY9%2FPvNGwwzlEtmBSM7X2RnZQpM76PSBj7kHh%2FoFZPJQumETDLhcXRBjqkAVyjC8QlIrk4JULuiOkvRS%2BApK6iGWIctySedcr7Xd5VBwSctywFzaILUzbBFE%2BAsoO3FQt8aa%2FmMxnXxiuvJf4THdRbL0KILrf%2B0cjxPMYrddKG%2F0ORb6CV1euO60o6YqkDeCIhvRCrzbjILxAo2CSNVTj3Ekaa2mRZ5uWODJ1lrjJ5evxBjRYDl1Rl69J960EODe2%2F8QzjeTSGmdFHepARhNwH&X-Amz-Signature=fc150be74e99773ddd485ecf3f96cefc054af4ec62fee9a963b7ec79ba734743&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XZQTKDNE%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125156Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCDtXtMTUFmQAdyPWwQYMfHzm0A%2FMCQLcsiH8TZMA8kVgIhAJl5f4IS04zxy9riCtjQdk10iWvzpDcENpJdBc1LGAHcKv8DCHYQABoMNjM3NDIzMTgzODA1IgwL%2Bwqml2J%2FW2PJZioq3AP1A%2B7qcD7Q0EqTg08j5yajoAS1BeVMSfUfmwZHlnz%2BNMCcRs%2FAlr6HB0%2FFMIMfDLx2bpQy1wwXh%2BpD2w9RnsG5LYKfqABoEPyUiqIQKR0lYW%2FF%2BV7PfcKywRwsZVObZYfocciVXr7GXEskyTLu1hhqh4Lx%2Fyl1Cso30GwtFoq4G9b0S%2Bt2sxHvm1p%2FY6FkzUpQk0vaLjG%2BCdy3aeddMc5sZZmpdvkIcdun3lRPPBJWML3%2B%2B4gNnhAqrdfpTsICPy6qusqmhQs7NPTzMBnTlLwmXgwilRSpSM1cTQPLJLvDZbsP0LcZ7JsKxRAkqyEXbufWEecI86Ev%2FtEMqn9ILqTWIwjfCKnQW5SN%2F6V4HWZEiTa4eXA3BHm%2F8o9f6bTT3wIXeP%2FX7t2MC7VfMw5cryBq32Yp9pP7wR0LfEAoOR5152Mhd7AwPU%2Bs1a89gVzA%2FhUC16Dj9ePuobTob%2FpZkjfscf1jBoF6WsjAIkNzVbsCf8%2FJpDZZ9PBJLBZanpnF1oI3%2BR9BkdyOvhNOONKYJ3peVrfZiqFTePrBIL%2FGZX3hK1FlEVxZsIOUPgE2ufWqUQ7PSVU%2FMO9faAGY9%2FPvNGwwzlEtmBSM7X2RnZQpM76PSBj7kHh%2FoFZPJQumETDLhcXRBjqkAVyjC8QlIrk4JULuiOkvRS%2BApK6iGWIctySedcr7Xd5VBwSctywFzaILUzbBFE%2BAsoO3FQt8aa%2FmMxnXxiuvJf4THdRbL0KILrf%2B0cjxPMYrddKG%2F0ORb6CV1euO60o6YqkDeCIhvRCrzbjILxAo2CSNVTj3Ekaa2mRZ5uWODJ1lrjJ5evxBjRYDl1Rl69J960EODe2%2F8QzjeTSGmdFHepARhNwH&X-Amz-Signature=a5483a015fc5b6abf99a1c5a3bdeee80868b9b0b83679a5c8ff8c2bc28029704&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XZQTKDNE%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125156Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCDtXtMTUFmQAdyPWwQYMfHzm0A%2FMCQLcsiH8TZMA8kVgIhAJl5f4IS04zxy9riCtjQdk10iWvzpDcENpJdBc1LGAHcKv8DCHYQABoMNjM3NDIzMTgzODA1IgwL%2Bwqml2J%2FW2PJZioq3AP1A%2B7qcD7Q0EqTg08j5yajoAS1BeVMSfUfmwZHlnz%2BNMCcRs%2FAlr6HB0%2FFMIMfDLx2bpQy1wwXh%2BpD2w9RnsG5LYKfqABoEPyUiqIQKR0lYW%2FF%2BV7PfcKywRwsZVObZYfocciVXr7GXEskyTLu1hhqh4Lx%2Fyl1Cso30GwtFoq4G9b0S%2Bt2sxHvm1p%2FY6FkzUpQk0vaLjG%2BCdy3aeddMc5sZZmpdvkIcdun3lRPPBJWML3%2B%2B4gNnhAqrdfpTsICPy6qusqmhQs7NPTzMBnTlLwmXgwilRSpSM1cTQPLJLvDZbsP0LcZ7JsKxRAkqyEXbufWEecI86Ev%2FtEMqn9ILqTWIwjfCKnQW5SN%2F6V4HWZEiTa4eXA3BHm%2F8o9f6bTT3wIXeP%2FX7t2MC7VfMw5cryBq32Yp9pP7wR0LfEAoOR5152Mhd7AwPU%2Bs1a89gVzA%2FhUC16Dj9ePuobTob%2FpZkjfscf1jBoF6WsjAIkNzVbsCf8%2FJpDZZ9PBJLBZanpnF1oI3%2BR9BkdyOvhNOONKYJ3peVrfZiqFTePrBIL%2FGZX3hK1FlEVxZsIOUPgE2ufWqUQ7PSVU%2FMO9faAGY9%2FPvNGwwzlEtmBSM7X2RnZQpM76PSBj7kHh%2FoFZPJQumETDLhcXRBjqkAVyjC8QlIrk4JULuiOkvRS%2BApK6iGWIctySedcr7Xd5VBwSctywFzaILUzbBFE%2BAsoO3FQt8aa%2FmMxnXxiuvJf4THdRbL0KILrf%2B0cjxPMYrddKG%2F0ORb6CV1euO60o6YqkDeCIhvRCrzbjILxAo2CSNVTj3Ekaa2mRZ5uWODJ1lrjJ5evxBjRYDl1Rl69J960EODe2%2F8QzjeTSGmdFHepARhNwH&X-Amz-Signature=ce72e76356118fb88dd178018ea778e59f65cea476e80d78cf31f57b1a01245c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XZQTKDNE%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125156Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCDtXtMTUFmQAdyPWwQYMfHzm0A%2FMCQLcsiH8TZMA8kVgIhAJl5f4IS04zxy9riCtjQdk10iWvzpDcENpJdBc1LGAHcKv8DCHYQABoMNjM3NDIzMTgzODA1IgwL%2Bwqml2J%2FW2PJZioq3AP1A%2B7qcD7Q0EqTg08j5yajoAS1BeVMSfUfmwZHlnz%2BNMCcRs%2FAlr6HB0%2FFMIMfDLx2bpQy1wwXh%2BpD2w9RnsG5LYKfqABoEPyUiqIQKR0lYW%2FF%2BV7PfcKywRwsZVObZYfocciVXr7GXEskyTLu1hhqh4Lx%2Fyl1Cso30GwtFoq4G9b0S%2Bt2sxHvm1p%2FY6FkzUpQk0vaLjG%2BCdy3aeddMc5sZZmpdvkIcdun3lRPPBJWML3%2B%2B4gNnhAqrdfpTsICPy6qusqmhQs7NPTzMBnTlLwmXgwilRSpSM1cTQPLJLvDZbsP0LcZ7JsKxRAkqyEXbufWEecI86Ev%2FtEMqn9ILqTWIwjfCKnQW5SN%2F6V4HWZEiTa4eXA3BHm%2F8o9f6bTT3wIXeP%2FX7t2MC7VfMw5cryBq32Yp9pP7wR0LfEAoOR5152Mhd7AwPU%2Bs1a89gVzA%2FhUC16Dj9ePuobTob%2FpZkjfscf1jBoF6WsjAIkNzVbsCf8%2FJpDZZ9PBJLBZanpnF1oI3%2BR9BkdyOvhNOONKYJ3peVrfZiqFTePrBIL%2FGZX3hK1FlEVxZsIOUPgE2ufWqUQ7PSVU%2FMO9faAGY9%2FPvNGwwzlEtmBSM7X2RnZQpM76PSBj7kHh%2FoFZPJQumETDLhcXRBjqkAVyjC8QlIrk4JULuiOkvRS%2BApK6iGWIctySedcr7Xd5VBwSctywFzaILUzbBFE%2BAsoO3FQt8aa%2FmMxnXxiuvJf4THdRbL0KILrf%2B0cjxPMYrddKG%2F0ORb6CV1euO60o6YqkDeCIhvRCrzbjILxAo2CSNVTj3Ekaa2mRZ5uWODJ1lrjJ5evxBjRYDl1Rl69J960EODe2%2F8QzjeTSGmdFHepARhNwH&X-Amz-Signature=1bc7c95671aae22069d07f49e40ee54f264a8d407086628533b17ecf0c66696f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633GRRN4G%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125157Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGkVy2fumwiipQzkW%2BoW4q2vDA5VsSS0PXFz7PFFOJLOAiAkRSKO3y5qbcALVGu1vF70i4mzYvcgMxnoU%2Bo5F%2BQWSCr%2FAwh2EAAaDDYzNzQyMzE4MzgwNSIM6NCVZfBVezXlK7zPKtwDCApjgsB01fUxZ8LDkUnUCeODPGebyza%2Fk%2FVOOM%2FwlpOYSIvIZLUgH8sCRnOyJk%2BpEnjZz9jKw9AclXV85vv1WggS7MP5%2FWwpqL4vovYxbg%2BE%2F8zJ93h4T78V%2BbCz1DEByFpTV8TNnmUg4EK3cFEiuCOvhUr%2BEj%2B5VaxkpackZDcBzKKQNHS8YrJsgT3d%2FDnOZkI9tuwv2ZR0mLYCwQQJPQVlKZhRcJFoNSEx9QNhEf8ub34qXBdUqSmy7b824KEjWEzL23btOdkzQEnfOWxmbvPX2ESRpOgfi6NONV8EzJsvud0ZGe4a%2BeRuEupgiM%2FdvI8fNE6M53NEAEoDPuiGktNNhtG952fzLhwRpB8TJSZGwmHiws5UJm4x7DKHmP2%2BEEK8NzBXsCJ4benAu1V44%2Fj81aH4LcdHWgJh7kmJvr73uWiSqoqn4uuYcykYtLNvZdIp2BKbXWaGhhSUgA02MD2H7%2Bjkp8vRZTU5kN6HvLVSq7yTLIcKYHUlUoc75sPMoCvFDvfrHPYek5LEYPVA%2F93Fn2jRvBaHdUUghej2z45Zauz0HDkwcBiIuBKTR5foxXDdC%2FStu%2FCYblkLMJM9wHTWs5OhT%2FI4v%2BoXIalU8ngLhbPN2DFI%2BSezgjUwsYbF0QY6pgFYsaoIm0fuLsY%2BRdjhsR7ytg6Yf1xS8ekQ6cigw4KZcuCCiECtCv9UCTTEnps9Kar7oFmS9PCB0TkDuVdc1AWKnPiWXc8fiEAUZyN%2FZcxLj2Q7%2Fl4OMAdMByMJzFybn0cXpHswwfkz8a6qmhovPdnr4JhhhDudxm%2BwH0cqqT%2B5h0PJR54q%2FtC0%2Fmh46jtwpqT40CJbSFeOjbz%2BK%2Bb3RiB%2Fnxue%2FgLS&X-Amz-Signature=166306289f2c8544b86f7c965f31ded90ac2718f4164cf08ae136c53d5ada2d5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667LA6ZMDX%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125157Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCj317odMeZYxNZ%2B%2FeFK8uXz3GZ2UzyHCdCKFKn5gvfrwIgJiaPFyaK3iK4Fa7ydJorqA%2BQD562jh4QRL4VoL5dOUcq%2FwMIdhAAGgw2Mzc0MjMxODM4MDUiDOQJAHgdKnjRUCZFrircAxgqcDaaNJlC91OPC5lbY4k6eC5Tqalgiv6Z8YeuWUqzzmsMp3KjgcAoTUdg7DWKPJRMENOFGU4QPSGaaQIbUq74LIhdDqTMW8icr6NFxBf9IeCMuRuSRPAfTjfb9oI7WDnbpGwIgDGreKYRYrncCCtrO45YcwCLGH9xKqChDZeF8RKZxaQ%2BYS%2Fk2qvi80xvYgA6paBm%2FXOlUaNR2oQKH%2BYaOsqx%2Fjv2BC7xo4w2FQ6KpUb9N9%2FpQwmqYkkB%2BHkctXRgIXBb2Le6yUPHUt3VGq%2FOJBSSlVZOvw6fZi2q36auubW1fr2pzl5pcO6GTbL81%2BIiBquffQDvGxIQUgV7N5J8fWvbTeUKELaMqPTPE%2B19kzvJbCgKviBXPwOvxRFM8k%2FVR6YK%2BqpYUIEvjmjpkkKTPjx%2F5p4gUKp6oOs6q%2B4b2hn8kOQZTf7XfmFuIjFVvETBglfTs3JAqwGwtKtpCj5ppS62K0hUTFebDloGcSjrg%2FUo4fcV7WPrI8CCjCH48ZfDxFR1NF1LuWT5POWp%2Fb5giZmW9hOPvO2jawmpWXgUfOtJHLlGNRy4mQ1GjIg6y%2FNpKHdipLVbOOpNBGpbf0d1zV5VsW1OayJrWbjkJh5dJPbRivhvsoTxGeRoMIGFxdEGOqUBz%2B7skIpA8tdwQGybkjaA0%2F%2BKwFCGWAtS3wn1ZGt1ciKsZuM98e3l5tz%2BTu4%2FQC5rlY5Ayxn293Mzq76jQWebC0z3Pi6qbqANc%2FTyR9TGaoLCeu7T6st7lworzw%2BoaA%2BoPwqiyoeWSmEo%2Fmfv7RHV8tvg45iCX8iBxGd8YVvBiN5MJKG8RIjePUICdGvZppSMN8ouWfdeu51YCp6dfZOKMg1sUQM3&X-Amz-Signature=4e305ad5d32265c80addc256e9ea03b697824c5c5ba921e235fc36ff5693af2a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667LA6ZMDX%2F20260616%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260616T125157Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCj317odMeZYxNZ%2B%2FeFK8uXz3GZ2UzyHCdCKFKn5gvfrwIgJiaPFyaK3iK4Fa7ydJorqA%2BQD562jh4QRL4VoL5dOUcq%2FwMIdhAAGgw2Mzc0MjMxODM4MDUiDOQJAHgdKnjRUCZFrircAxgqcDaaNJlC91OPC5lbY4k6eC5Tqalgiv6Z8YeuWUqzzmsMp3KjgcAoTUdg7DWKPJRMENOFGU4QPSGaaQIbUq74LIhdDqTMW8icr6NFxBf9IeCMuRuSRPAfTjfb9oI7WDnbpGwIgDGreKYRYrncCCtrO45YcwCLGH9xKqChDZeF8RKZxaQ%2BYS%2Fk2qvi80xvYgA6paBm%2FXOlUaNR2oQKH%2BYaOsqx%2Fjv2BC7xo4w2FQ6KpUb9N9%2FpQwmqYkkB%2BHkctXRgIXBb2Le6yUPHUt3VGq%2FOJBSSlVZOvw6fZi2q36auubW1fr2pzl5pcO6GTbL81%2BIiBquffQDvGxIQUgV7N5J8fWvbTeUKELaMqPTPE%2B19kzvJbCgKviBXPwOvxRFM8k%2FVR6YK%2BqpYUIEvjmjpkkKTPjx%2F5p4gUKp6oOs6q%2B4b2hn8kOQZTf7XfmFuIjFVvETBglfTs3JAqwGwtKtpCj5ppS62K0hUTFebDloGcSjrg%2FUo4fcV7WPrI8CCjCH48ZfDxFR1NF1LuWT5POWp%2Fb5giZmW9hOPvO2jawmpWXgUfOtJHLlGNRy4mQ1GjIg6y%2FNpKHdipLVbOOpNBGpbf0d1zV5VsW1OayJrWbjkJh5dJPbRivhvsoTxGeRoMIGFxdEGOqUBz%2B7skIpA8tdwQGybkjaA0%2F%2BKwFCGWAtS3wn1ZGt1ciKsZuM98e3l5tz%2BTu4%2FQC5rlY5Ayxn293Mzq76jQWebC0z3Pi6qbqANc%2FTyR9TGaoLCeu7T6st7lworzw%2BoaA%2BoPwqiyoeWSmEo%2Fmfv7RHV8tvg45iCX8iBxGd8YVvBiN5MJKG8RIjePUICdGvZppSMN8ouWfdeu51YCp6dfZOKMg1sUQM3&X-Amz-Signature=ada59942229378705129a579df199b55d78c0627f09bd6baebf3aabf80cc9858&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
