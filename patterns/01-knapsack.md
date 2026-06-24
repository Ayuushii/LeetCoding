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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677VOAGX3%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104826Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJHMEUCIQCv3iwGKR8rd%2BeaUiHIBSMZj9o30GRlj%2BdbscUMWmPRXQIgTaUu8APPAjDOruyRrQSYGJFDLr5pbu05DNT%2BFuX%2FJIYq%2FwMIMhAAGgw2Mzc0MjMxODM4MDUiDDVLqbF3FLTeEO3MhircA9CF7YT%2F4s%2B8ov4X9DJNx4HdRTUvt3ccF5cA53ITCoEB1M2KF9f2lZRLKDvOXl6gYGbIOCjL%2FCtfHjP80hWx7ZpuB8U5hego1t8moImBSgmY%2FvFVrDvF1Z0VVOXAoisLVF3pGINoAgIsWrfu3PYFsanCAi69W7yB1rHBOC%2Fh9zmcEJb2lKYEFn0P9Xk%2BlUR%2F7SUt4271PYTw2gAeVW%2F4z8%2BojZPu6ZfAAiKHoPXZcFgSSGbwILfa5hohVhZvYnPb4iPTIIgIx1vTyG6B0oG73VKaZjfzrxsHXfrd1NPSYE6qZ%2FOoTalTJokthdDO6vd9DnSXaTbUje6z%2BQXJImaYx2K8i4Jkm0Ntcn13hxBmM3Bur0ZTMZwCOoNLZW8L3Lj52fMAS4LRR9vsAXzqugef7iMusisuCnsAJyEJ4eitceQ8jYUjas8AV38mZQsIqik6uuuoCLJLVIqdP9fyiH%2FgifFIbOqkZXvTFrIWwJEmSPb9bW69GaWDrX21YStawx04IFX1j9%2FwfmiygQzKzt%2BVv9KqZ8B9izehXmDkDAUxVkNr0Jwv3zoCkQGAivZzo5szPUk4iW6UAP%2FU9VAr74qlbMHd8YKJuoB4AqCztaT26gqoOdRP1ZPRGCyJXFV0MNvE7tEGOqUB8jUn4ckzW95h7LPZ1G%2BWSxYkJR1r9XswfeP4CyC%2BXImjctt8gh1xxlDWuJpsIrHwqzHT41EpNJWQoJI81Sip8VWlw%2Fyw9N2ps4PeiDb7wpZm6BTRAaFkXUiaZiwa%2B8NI%2F3SCFr7mUWC8lll6%2BMJXM4izfNmxMNIMgm8e1H7r7m4Vm6HL9Y4LJ%2FpYXk2iaN4EEhk5RY%2FND6D2AcNOGYOtbs1aQJss&X-Amz-Signature=0257b92ccb3bd992ceba7cf84886c5f77d5611eae227eb844418fee7018b03b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677VOAGX3%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104826Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJHMEUCIQCv3iwGKR8rd%2BeaUiHIBSMZj9o30GRlj%2BdbscUMWmPRXQIgTaUu8APPAjDOruyRrQSYGJFDLr5pbu05DNT%2BFuX%2FJIYq%2FwMIMhAAGgw2Mzc0MjMxODM4MDUiDDVLqbF3FLTeEO3MhircA9CF7YT%2F4s%2B8ov4X9DJNx4HdRTUvt3ccF5cA53ITCoEB1M2KF9f2lZRLKDvOXl6gYGbIOCjL%2FCtfHjP80hWx7ZpuB8U5hego1t8moImBSgmY%2FvFVrDvF1Z0VVOXAoisLVF3pGINoAgIsWrfu3PYFsanCAi69W7yB1rHBOC%2Fh9zmcEJb2lKYEFn0P9Xk%2BlUR%2F7SUt4271PYTw2gAeVW%2F4z8%2BojZPu6ZfAAiKHoPXZcFgSSGbwILfa5hohVhZvYnPb4iPTIIgIx1vTyG6B0oG73VKaZjfzrxsHXfrd1NPSYE6qZ%2FOoTalTJokthdDO6vd9DnSXaTbUje6z%2BQXJImaYx2K8i4Jkm0Ntcn13hxBmM3Bur0ZTMZwCOoNLZW8L3Lj52fMAS4LRR9vsAXzqugef7iMusisuCnsAJyEJ4eitceQ8jYUjas8AV38mZQsIqik6uuuoCLJLVIqdP9fyiH%2FgifFIbOqkZXvTFrIWwJEmSPb9bW69GaWDrX21YStawx04IFX1j9%2FwfmiygQzKzt%2BVv9KqZ8B9izehXmDkDAUxVkNr0Jwv3zoCkQGAivZzo5szPUk4iW6UAP%2FU9VAr74qlbMHd8YKJuoB4AqCztaT26gqoOdRP1ZPRGCyJXFV0MNvE7tEGOqUB8jUn4ckzW95h7LPZ1G%2BWSxYkJR1r9XswfeP4CyC%2BXImjctt8gh1xxlDWuJpsIrHwqzHT41EpNJWQoJI81Sip8VWlw%2Fyw9N2ps4PeiDb7wpZm6BTRAaFkXUiaZiwa%2B8NI%2F3SCFr7mUWC8lll6%2BMJXM4izfNmxMNIMgm8e1H7r7m4Vm6HL9Y4LJ%2FpYXk2iaN4EEhk5RY%2FND6D2AcNOGYOtbs1aQJss&X-Amz-Signature=745c86deed350b12cb0749ed6560cb7b56ad3359584016ce5ff33d7e9bcdb135&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677VOAGX3%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104826Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJHMEUCIQCv3iwGKR8rd%2BeaUiHIBSMZj9o30GRlj%2BdbscUMWmPRXQIgTaUu8APPAjDOruyRrQSYGJFDLr5pbu05DNT%2BFuX%2FJIYq%2FwMIMhAAGgw2Mzc0MjMxODM4MDUiDDVLqbF3FLTeEO3MhircA9CF7YT%2F4s%2B8ov4X9DJNx4HdRTUvt3ccF5cA53ITCoEB1M2KF9f2lZRLKDvOXl6gYGbIOCjL%2FCtfHjP80hWx7ZpuB8U5hego1t8moImBSgmY%2FvFVrDvF1Z0VVOXAoisLVF3pGINoAgIsWrfu3PYFsanCAi69W7yB1rHBOC%2Fh9zmcEJb2lKYEFn0P9Xk%2BlUR%2F7SUt4271PYTw2gAeVW%2F4z8%2BojZPu6ZfAAiKHoPXZcFgSSGbwILfa5hohVhZvYnPb4iPTIIgIx1vTyG6B0oG73VKaZjfzrxsHXfrd1NPSYE6qZ%2FOoTalTJokthdDO6vd9DnSXaTbUje6z%2BQXJImaYx2K8i4Jkm0Ntcn13hxBmM3Bur0ZTMZwCOoNLZW8L3Lj52fMAS4LRR9vsAXzqugef7iMusisuCnsAJyEJ4eitceQ8jYUjas8AV38mZQsIqik6uuuoCLJLVIqdP9fyiH%2FgifFIbOqkZXvTFrIWwJEmSPb9bW69GaWDrX21YStawx04IFX1j9%2FwfmiygQzKzt%2BVv9KqZ8B9izehXmDkDAUxVkNr0Jwv3zoCkQGAivZzo5szPUk4iW6UAP%2FU9VAr74qlbMHd8YKJuoB4AqCztaT26gqoOdRP1ZPRGCyJXFV0MNvE7tEGOqUB8jUn4ckzW95h7LPZ1G%2BWSxYkJR1r9XswfeP4CyC%2BXImjctt8gh1xxlDWuJpsIrHwqzHT41EpNJWQoJI81Sip8VWlw%2Fyw9N2ps4PeiDb7wpZm6BTRAaFkXUiaZiwa%2B8NI%2F3SCFr7mUWC8lll6%2BMJXM4izfNmxMNIMgm8e1H7r7m4Vm6HL9Y4LJ%2FpYXk2iaN4EEhk5RY%2FND6D2AcNOGYOtbs1aQJss&X-Amz-Signature=bd9becd4c47f19e14fcb9fa9bca485791392fc74036b49da0e4127ff3254f204&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WZEONWZR%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104826Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQDqR7d2fmXHwOEYjhZf29%2Fa2zCrq36dFLWs5jWb%2ByFQEQIhAJR%2Bw5ALrLogRaxW9nFqia6FGc1a%2FlXKnRJitYyq7b4MKv8DCDIQABoMNjM3NDIzMTgzODA1IgxX7Vs5GyD%2BCW02UfAq3APxlzb6cDJ09lCY5vrw803v5nCP6UtrwqnMBw9LlNe%2F%2FzZwwsfetCszxQ7GSPTQw9kTlfXCT%2BHJ2XcdIT%2FJMwY%2Baqt9FzUGum921zvT52tSUaEvEcODoCsTfG03Im3YMUhpwNwdg0LLAdKZg022J607Axe0GxRixER2jukMPwThaUPdZekt407DTWJG%2FHNmxwudFSZ83WuDUrcnf81SrXkPiZkhhuFILRSdzG0qMHcTwSchgqVTWeFHcYStetXIcAiGRKGTjlTpJMoGCblhPrtqmV87Cz8O2B%2B57NBho6o8UKtQchp7RD8DvpmrxCipHkuOLhs5%2By8HvRJS7KbTJgoUDTxEt3RBs7OswfLBvMidhIIf2mbPJaQYMzFpmMJx2vOU%2FNX0rqCncEYMwVmn0g43%2FJy%2BtMzoHW83xjFlV6Ext175JNR0YGC9f0s8JZQHQnSlxthDc9d0VIxEm0gV%2ByjSBP71SEDnNQsuotjicwUKdygDoxJ%2BTAsGoXuPW%2FPxDfDAkdOS%2B7cNgGLuqp55t0Id3Ki7ttqUgG7APq5rypaSH3pcZr6gQyy4SDrrxz6u9FqueZfoLaW9bnOxDDrMS90bquLGVvhGHu9xMd0QBN6OCpTD8r5gNxiVC1Q8WDCLwu7RBjqkAeZSi5FD%2Bs%2FuBbMJv3fDh6%2Fve714HFo%2Bypo%2BNJACtz2HJuPAEw0VpJ3RW0AxZtEQ%2FLnWx7mxU0%2FL5iij7g96hZVFY5ZxHd%2FlOnqaCoDC3a%2Fah1XJr9mZHjuqufYOT9lAdAxhuuDxLayEPdGug%2BUrdfOHzt%2BbePE7LvYpKeszlTx%2BrtQ5qfZjY6B1DYgZJ5Ghk4C8ZbKbeqfVWvworOH0ItUYdcOl&X-Amz-Signature=168fd87e0a9e44446a6456b75974fcedebbe4cb680c684d4ccfc5352acc0ae04&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WZEONWZR%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104826Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQDqR7d2fmXHwOEYjhZf29%2Fa2zCrq36dFLWs5jWb%2ByFQEQIhAJR%2Bw5ALrLogRaxW9nFqia6FGc1a%2FlXKnRJitYyq7b4MKv8DCDIQABoMNjM3NDIzMTgzODA1IgxX7Vs5GyD%2BCW02UfAq3APxlzb6cDJ09lCY5vrw803v5nCP6UtrwqnMBw9LlNe%2F%2FzZwwsfetCszxQ7GSPTQw9kTlfXCT%2BHJ2XcdIT%2FJMwY%2Baqt9FzUGum921zvT52tSUaEvEcODoCsTfG03Im3YMUhpwNwdg0LLAdKZg022J607Axe0GxRixER2jukMPwThaUPdZekt407DTWJG%2FHNmxwudFSZ83WuDUrcnf81SrXkPiZkhhuFILRSdzG0qMHcTwSchgqVTWeFHcYStetXIcAiGRKGTjlTpJMoGCblhPrtqmV87Cz8O2B%2B57NBho6o8UKtQchp7RD8DvpmrxCipHkuOLhs5%2By8HvRJS7KbTJgoUDTxEt3RBs7OswfLBvMidhIIf2mbPJaQYMzFpmMJx2vOU%2FNX0rqCncEYMwVmn0g43%2FJy%2BtMzoHW83xjFlV6Ext175JNR0YGC9f0s8JZQHQnSlxthDc9d0VIxEm0gV%2ByjSBP71SEDnNQsuotjicwUKdygDoxJ%2BTAsGoXuPW%2FPxDfDAkdOS%2B7cNgGLuqp55t0Id3Ki7ttqUgG7APq5rypaSH3pcZr6gQyy4SDrrxz6u9FqueZfoLaW9bnOxDDrMS90bquLGVvhGHu9xMd0QBN6OCpTD8r5gNxiVC1Q8WDCLwu7RBjqkAeZSi5FD%2Bs%2FuBbMJv3fDh6%2Fve714HFo%2Bypo%2BNJACtz2HJuPAEw0VpJ3RW0AxZtEQ%2FLnWx7mxU0%2FL5iij7g96hZVFY5ZxHd%2FlOnqaCoDC3a%2Fah1XJr9mZHjuqufYOT9lAdAxhuuDxLayEPdGug%2BUrdfOHzt%2BbePE7LvYpKeszlTx%2BrtQ5qfZjY6B1DYgZJ5Ghk4C8ZbKbeqfVWvworOH0ItUYdcOl&X-Amz-Signature=e095c83f854ab0b488c4da719f0617ee60faf9f56d3de9497af0a82d090eac85&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WZEONWZR%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104826Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQDqR7d2fmXHwOEYjhZf29%2Fa2zCrq36dFLWs5jWb%2ByFQEQIhAJR%2Bw5ALrLogRaxW9nFqia6FGc1a%2FlXKnRJitYyq7b4MKv8DCDIQABoMNjM3NDIzMTgzODA1IgxX7Vs5GyD%2BCW02UfAq3APxlzb6cDJ09lCY5vrw803v5nCP6UtrwqnMBw9LlNe%2F%2FzZwwsfetCszxQ7GSPTQw9kTlfXCT%2BHJ2XcdIT%2FJMwY%2Baqt9FzUGum921zvT52tSUaEvEcODoCsTfG03Im3YMUhpwNwdg0LLAdKZg022J607Axe0GxRixER2jukMPwThaUPdZekt407DTWJG%2FHNmxwudFSZ83WuDUrcnf81SrXkPiZkhhuFILRSdzG0qMHcTwSchgqVTWeFHcYStetXIcAiGRKGTjlTpJMoGCblhPrtqmV87Cz8O2B%2B57NBho6o8UKtQchp7RD8DvpmrxCipHkuOLhs5%2By8HvRJS7KbTJgoUDTxEt3RBs7OswfLBvMidhIIf2mbPJaQYMzFpmMJx2vOU%2FNX0rqCncEYMwVmn0g43%2FJy%2BtMzoHW83xjFlV6Ext175JNR0YGC9f0s8JZQHQnSlxthDc9d0VIxEm0gV%2ByjSBP71SEDnNQsuotjicwUKdygDoxJ%2BTAsGoXuPW%2FPxDfDAkdOS%2B7cNgGLuqp55t0Id3Ki7ttqUgG7APq5rypaSH3pcZr6gQyy4SDrrxz6u9FqueZfoLaW9bnOxDDrMS90bquLGVvhGHu9xMd0QBN6OCpTD8r5gNxiVC1Q8WDCLwu7RBjqkAeZSi5FD%2Bs%2FuBbMJv3fDh6%2Fve714HFo%2Bypo%2BNJACtz2HJuPAEw0VpJ3RW0AxZtEQ%2FLnWx7mxU0%2FL5iij7g96hZVFY5ZxHd%2FlOnqaCoDC3a%2Fah1XJr9mZHjuqufYOT9lAdAxhuuDxLayEPdGug%2BUrdfOHzt%2BbePE7LvYpKeszlTx%2BrtQ5qfZjY6B1DYgZJ5Ghk4C8ZbKbeqfVWvworOH0ItUYdcOl&X-Amz-Signature=ef55e89bb6a485069465a130ebc832550d896134de19ae8bfde4689b3f79c33d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WZEONWZR%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104826Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQDqR7d2fmXHwOEYjhZf29%2Fa2zCrq36dFLWs5jWb%2ByFQEQIhAJR%2Bw5ALrLogRaxW9nFqia6FGc1a%2FlXKnRJitYyq7b4MKv8DCDIQABoMNjM3NDIzMTgzODA1IgxX7Vs5GyD%2BCW02UfAq3APxlzb6cDJ09lCY5vrw803v5nCP6UtrwqnMBw9LlNe%2F%2FzZwwsfetCszxQ7GSPTQw9kTlfXCT%2BHJ2XcdIT%2FJMwY%2Baqt9FzUGum921zvT52tSUaEvEcODoCsTfG03Im3YMUhpwNwdg0LLAdKZg022J607Axe0GxRixER2jukMPwThaUPdZekt407DTWJG%2FHNmxwudFSZ83WuDUrcnf81SrXkPiZkhhuFILRSdzG0qMHcTwSchgqVTWeFHcYStetXIcAiGRKGTjlTpJMoGCblhPrtqmV87Cz8O2B%2B57NBho6o8UKtQchp7RD8DvpmrxCipHkuOLhs5%2By8HvRJS7KbTJgoUDTxEt3RBs7OswfLBvMidhIIf2mbPJaQYMzFpmMJx2vOU%2FNX0rqCncEYMwVmn0g43%2FJy%2BtMzoHW83xjFlV6Ext175JNR0YGC9f0s8JZQHQnSlxthDc9d0VIxEm0gV%2ByjSBP71SEDnNQsuotjicwUKdygDoxJ%2BTAsGoXuPW%2FPxDfDAkdOS%2B7cNgGLuqp55t0Id3Ki7ttqUgG7APq5rypaSH3pcZr6gQyy4SDrrxz6u9FqueZfoLaW9bnOxDDrMS90bquLGVvhGHu9xMd0QBN6OCpTD8r5gNxiVC1Q8WDCLwu7RBjqkAeZSi5FD%2Bs%2FuBbMJv3fDh6%2Fve714HFo%2Bypo%2BNJACtz2HJuPAEw0VpJ3RW0AxZtEQ%2FLnWx7mxU0%2FL5iij7g96hZVFY5ZxHd%2FlOnqaCoDC3a%2Fah1XJr9mZHjuqufYOT9lAdAxhuuDxLayEPdGug%2BUrdfOHzt%2BbePE7LvYpKeszlTx%2BrtQ5qfZjY6B1DYgZJ5Ghk4C8ZbKbeqfVWvworOH0ItUYdcOl&X-Amz-Signature=ebaf76c43d94d7e04b35552612643e8d3023ae6d11dcb0af225bcdd8518c928d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WC57MRJC%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104829Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJHMEUCIQCSGB84ccW6ZIqD%2FcxxYixPYv7lY6h3dHjNh0I2bqqtjQIgIFZr7w5eQ4xO%2FACd%2BsOh3N8urrp98e8m9wPd7qHIePwq%2FwMIMxAAGgw2Mzc0MjMxODM4MDUiDPH6K6xZ%2BHPaY8%2BQjyrcA9x91kkoc%2BXD1JnMj9AhdQiBlHwT2VKrkszkT9WOHjSKgcNRE8lwdgtG71ZIq3Sjz%2FYY8mKq637EWfb2ok5mX%2BOK4fsrRlz28%2FbNlBArWoL5%2FmSVYHbZovWXP%2Fb5k9falCaZS29gsdAdQKQkWx83%2FqHKzONOC%2FeA7mRVQqPzsDN0OwCr9cxRBHxN%2B2PNEZ%2BfXpdrGCyPgGAxZmOcdBM6A7rUc7sIB6rGCDmrGmC5iui%2B3Gw6P09I2T6hgfq4A7k79o51kfaN5X1JjrimQE3uyqtzA%2BJ%2F2e5%2BW%2Bcmv54ygMEbHgecUPz8caHTxXNl54HBm7B4bw5%2BqfYABNrILktiMSlzuz%2BdQ3baZk06jfjoL71P0fOvSdU71M8HEGy2MytrG2BedC%2F%2BQ2m4F23nuNLwERXBz%2FumLXBYZj4XJsp3maxM8m%2FCFY6jhFEf2ahbpf99YVkpepBI%2BTU4JcQEliBoKh6KHznHUHwIFsZLRsM8aH938zhhsXXZAaisih%2F4ifNp3ehw0aG0UFBmhF6%2FVASferUo7S9cxTi%2BBczEIY%2BHZdF2OCjq8tIZfSZpKYqYdYyV%2BCjfd4rfF%2FrXAWupdwcp2CzTnmnYkMKmqUl%2B0Yt%2FjNtyrhbY8P9%2BVzJ6oE39MOjE7tEGOqUB1gHNKcVMacKb6YJi7NBs0oDG4r5Zbno578bCZpO4UtXnZ%2BxfjqtIPYThThWmWsmgj1p1%2Fg%2B0LTM2L7c7eKznDx%2BLAcywUcewSbb08sZGe6DPE3AY4Sa%2BI0y0Ki6dAryHl5%2F5IFcoPbNUEFB0%2B1AuXsDpX6uU3Rz6RAKpCz5imgmHACIKM79nc4Vpy01pXGdhsjY%2FSEkCutHt%2FkxPLbR9koi77eLQ&X-Amz-Signature=0eb5323672db88d4d40fe60c2102de23dda3c67b3da2e027d190c013e7f2bbbd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QSIDFPG5%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104830Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQDN3GGQ8WCXhEK%2FTQRf1xAg4FnUJAGFUWN62gpFCf3wiQIhAOmZgaVBnGCdyhcwnxNRAj2RAAeRqnQLwFz6fi4KC6aRKv8DCDIQABoMNjM3NDIzMTgzODA1Igw7Np6CZfqbBNFNtLsq3APbRTIh7%2F73K%2B%2BZ3v7c32RHST0T4ORidRSqIU14hzW4T4rvVuT5Ls892Z8DuevQ6ALI4DPKVt1FIH%2Fwn69MLvRanhm5KpaAMFiAnS1xPy9KykqTO5x4YR3vUGzcKS9JfR0R%2BcjHcafbIe%2BXIzmls0ea%2BcbWdZ%2BMM88hp1q1o9rx8IGYoM0AqtDanvkbqX6eC06WZij%2FdcMV3ODlDqvMgx6NVukLLHy9%2FtgqPRgzXKkPre41VtexgL9pi5qGjM781Z21IHCCKYLG%2Fh7fTnS4TLOgxiTwgXhNSgScYfDOhbqGHxQ%2Fx4tschHXuk8%2BaoV0DqYF46gCMS9Vv%2F4xAKAGe0iQoWGaxQAR2yOcyC0lDbl0jV8R9YFHLpEEDESQxn6Xbp5vMmEImXpLiJgweC%2FdYkQsarwfHg2N9rZx33hR7w%2BdQYJwMyfKVck0ZPgl9Qr893uOTRdYA1nsvkGQjYcm0QlxFsnW5br5WOx7PVv99obInXyLyTvpFw5fGupHlDe4W%2BgW8viSEeAISQEgreEcXHDLRhNlQtBB2QXBihZRc5VlM0yFwnpwx8I6tYcB3rUhEunVIy4WRf4xnm434MLDBW7K6f3WmL3U38OHy8%2BuAYcVBX%2FkDqN0Dg9iKEcChDCKwu7RBjqkATv%2BMpb72xV5rMbDZ4%2FEbEH5F6bhpz9mmfyWvtUsyXQ84DetyVoKnglc0c4LD4bcl8iSc2gesAGZWSkrKHZKLcqeWHRYDJ7xBU%2B%2FP28NEHh5A0FLWl3S9%2F211kTs6sD0IcFeB2U7xyHQDlr4bmYAvv3RSgwLUklAtn2V7T%2Fv8hYh4qu1HXPmII84IxqXPnnoULlBuyBb%2FW1yvUGX8gZHKRdwFEj6&X-Amz-Signature=41d6c7cb1352793c6c2d6bc973c6d7fd99e9ed4b8bcc24cf2ad9bd4a5b32959a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QSIDFPG5%2F20260624%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260624T104830Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQDN3GGQ8WCXhEK%2FTQRf1xAg4FnUJAGFUWN62gpFCf3wiQIhAOmZgaVBnGCdyhcwnxNRAj2RAAeRqnQLwFz6fi4KC6aRKv8DCDIQABoMNjM3NDIzMTgzODA1Igw7Np6CZfqbBNFNtLsq3APbRTIh7%2F73K%2B%2BZ3v7c32RHST0T4ORidRSqIU14hzW4T4rvVuT5Ls892Z8DuevQ6ALI4DPKVt1FIH%2Fwn69MLvRanhm5KpaAMFiAnS1xPy9KykqTO5x4YR3vUGzcKS9JfR0R%2BcjHcafbIe%2BXIzmls0ea%2BcbWdZ%2BMM88hp1q1o9rx8IGYoM0AqtDanvkbqX6eC06WZij%2FdcMV3ODlDqvMgx6NVukLLHy9%2FtgqPRgzXKkPre41VtexgL9pi5qGjM781Z21IHCCKYLG%2Fh7fTnS4TLOgxiTwgXhNSgScYfDOhbqGHxQ%2Fx4tschHXuk8%2BaoV0DqYF46gCMS9Vv%2F4xAKAGe0iQoWGaxQAR2yOcyC0lDbl0jV8R9YFHLpEEDESQxn6Xbp5vMmEImXpLiJgweC%2FdYkQsarwfHg2N9rZx33hR7w%2BdQYJwMyfKVck0ZPgl9Qr893uOTRdYA1nsvkGQjYcm0QlxFsnW5br5WOx7PVv99obInXyLyTvpFw5fGupHlDe4W%2BgW8viSEeAISQEgreEcXHDLRhNlQtBB2QXBihZRc5VlM0yFwnpwx8I6tYcB3rUhEunVIy4WRf4xnm434MLDBW7K6f3WmL3U38OHy8%2BuAYcVBX%2FkDqN0Dg9iKEcChDCKwu7RBjqkATv%2BMpb72xV5rMbDZ4%2FEbEH5F6bhpz9mmfyWvtUsyXQ84DetyVoKnglc0c4LD4bcl8iSc2gesAGZWSkrKHZKLcqeWHRYDJ7xBU%2B%2FP28NEHh5A0FLWl3S9%2F211kTs6sD0IcFeB2U7xyHQDlr4bmYAvv3RSgwLUklAtn2V7T%2Fv8hYh4qu1HXPmII84IxqXPnnoULlBuyBb%2FW1yvUGX8gZHKRdwFEj6&X-Amz-Signature=4d41dcf5f7e37c8efe338fa7d4ca7c74dc4b7d5fd07778c8bb64dd8ee44ab594&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
