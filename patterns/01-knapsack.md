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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663KCMSV72%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJHMEUCIQDA8LcubWz6P%2FtLslek5pcr55Lng6HzDN822CWaNQEaNQIgCuUHoJM7xwMLHc701KbJ0ISVUy%2FrW9j9%2BH8e0iIPvjsq%2FwMIBxAAGgw2Mzc0MjMxODM4MDUiDBSxjd7f3eUCgtM7lyrcA3e31WzvIF7FCuRxUmqL94OmhlGUK9BkXvs90HGcBluJOjTiKXuNQXqbJh3yn5XaxEYXd3FButXqGp%2BFlJQlkHI0QY5C%2BGFe%2Bl%2BM0sgWoHLHu2f4u9qUIStNvO9HSR4uFY4dA0JUeZW5oxsXz2Hu%2B%2B%2BkgcHf9YRahh%2BZJtEmqh%2Bs22neaNPVVcMSyBiV9bebRNFtwTw2oNJPADwPOLBucs3FFDwq7JhIzDUqfwH3yoHZb79ulJj1JtywcjUmv4k%2BiOC0suFiaiVlvUs9rTWooZPjfFZNYbuOBX4q%2Bx9h5xiZOSgExGKU%2BH0DdWDcE05o8jdhyJADZoqW6HfDvAuq6LyzbjKdwOfbABt7t5FMB8QiXHtZaS1%2Bn46LbNVX0Qu4ujay0QqIaB4eGYdWoF2et8ntRl09FCzYhQ84iQRjk5PI7UBSi39fTiPLSYjGSY%2BGr4skqbyoRmTrvOIRrI8O%2Btwn44TDRReMnek5C7MoKyI7bUdknBHB0NUGRSi%2Fg7K1pf9avdNAG5VCdP9rBreVGUg5RHkNW0tAMq6k2Et%2FrRUlSt9IvZsYg%2FuWiQ9RDz1kqMwC3cErIKDGjVbguF2mDSt1bhUKuTB7yiWs1DUFcxY98SjhNJU3h%2Bw6NwoWMLGg%2BswGOqUBQ%2FBgaaytAy%2FgYPE9QuDl2gpeaWRA20RHrzfmKAyrLybPpP5U6jWiNC9GgRf%2BV1zdiVbJ2BgAvm8qXQEHSnTP4vPiANmD6mobXJac99dbPIDP2mWMy7t2aJojZzSIUv7X3ZgNrqWtyfs4eUmfTDYBBWpjJ0EAz0q6MnrbmACYcp7MUL34DBIbhtOYFY0%2Ff7HMHuEW9L2djSYyGLD5TOPWebkXuNAn&X-Amz-Signature=edcd0c92bcb66f6c6ce859eabab8e8d1cee48aa3a2552ac1577b9ac4fc27080f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663KCMSV72%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJHMEUCIQDA8LcubWz6P%2FtLslek5pcr55Lng6HzDN822CWaNQEaNQIgCuUHoJM7xwMLHc701KbJ0ISVUy%2FrW9j9%2BH8e0iIPvjsq%2FwMIBxAAGgw2Mzc0MjMxODM4MDUiDBSxjd7f3eUCgtM7lyrcA3e31WzvIF7FCuRxUmqL94OmhlGUK9BkXvs90HGcBluJOjTiKXuNQXqbJh3yn5XaxEYXd3FButXqGp%2BFlJQlkHI0QY5C%2BGFe%2Bl%2BM0sgWoHLHu2f4u9qUIStNvO9HSR4uFY4dA0JUeZW5oxsXz2Hu%2B%2B%2BkgcHf9YRahh%2BZJtEmqh%2Bs22neaNPVVcMSyBiV9bebRNFtwTw2oNJPADwPOLBucs3FFDwq7JhIzDUqfwH3yoHZb79ulJj1JtywcjUmv4k%2BiOC0suFiaiVlvUs9rTWooZPjfFZNYbuOBX4q%2Bx9h5xiZOSgExGKU%2BH0DdWDcE05o8jdhyJADZoqW6HfDvAuq6LyzbjKdwOfbABt7t5FMB8QiXHtZaS1%2Bn46LbNVX0Qu4ujay0QqIaB4eGYdWoF2et8ntRl09FCzYhQ84iQRjk5PI7UBSi39fTiPLSYjGSY%2BGr4skqbyoRmTrvOIRrI8O%2Btwn44TDRReMnek5C7MoKyI7bUdknBHB0NUGRSi%2Fg7K1pf9avdNAG5VCdP9rBreVGUg5RHkNW0tAMq6k2Et%2FrRUlSt9IvZsYg%2FuWiQ9RDz1kqMwC3cErIKDGjVbguF2mDSt1bhUKuTB7yiWs1DUFcxY98SjhNJU3h%2Bw6NwoWMLGg%2BswGOqUBQ%2FBgaaytAy%2FgYPE9QuDl2gpeaWRA20RHrzfmKAyrLybPpP5U6jWiNC9GgRf%2BV1zdiVbJ2BgAvm8qXQEHSnTP4vPiANmD6mobXJac99dbPIDP2mWMy7t2aJojZzSIUv7X3ZgNrqWtyfs4eUmfTDYBBWpjJ0EAz0q6MnrbmACYcp7MUL34DBIbhtOYFY0%2Ff7HMHuEW9L2djSYyGLD5TOPWebkXuNAn&X-Amz-Signature=553ea8f936a37c3605b80b5ac75e2902dce3ed122accf35d61088b7f446e5117&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663KCMSV72%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJHMEUCIQDA8LcubWz6P%2FtLslek5pcr55Lng6HzDN822CWaNQEaNQIgCuUHoJM7xwMLHc701KbJ0ISVUy%2FrW9j9%2BH8e0iIPvjsq%2FwMIBxAAGgw2Mzc0MjMxODM4MDUiDBSxjd7f3eUCgtM7lyrcA3e31WzvIF7FCuRxUmqL94OmhlGUK9BkXvs90HGcBluJOjTiKXuNQXqbJh3yn5XaxEYXd3FButXqGp%2BFlJQlkHI0QY5C%2BGFe%2Bl%2BM0sgWoHLHu2f4u9qUIStNvO9HSR4uFY4dA0JUeZW5oxsXz2Hu%2B%2B%2BkgcHf9YRahh%2BZJtEmqh%2Bs22neaNPVVcMSyBiV9bebRNFtwTw2oNJPADwPOLBucs3FFDwq7JhIzDUqfwH3yoHZb79ulJj1JtywcjUmv4k%2BiOC0suFiaiVlvUs9rTWooZPjfFZNYbuOBX4q%2Bx9h5xiZOSgExGKU%2BH0DdWDcE05o8jdhyJADZoqW6HfDvAuq6LyzbjKdwOfbABt7t5FMB8QiXHtZaS1%2Bn46LbNVX0Qu4ujay0QqIaB4eGYdWoF2et8ntRl09FCzYhQ84iQRjk5PI7UBSi39fTiPLSYjGSY%2BGr4skqbyoRmTrvOIRrI8O%2Btwn44TDRReMnek5C7MoKyI7bUdknBHB0NUGRSi%2Fg7K1pf9avdNAG5VCdP9rBreVGUg5RHkNW0tAMq6k2Et%2FrRUlSt9IvZsYg%2FuWiQ9RDz1kqMwC3cErIKDGjVbguF2mDSt1bhUKuTB7yiWs1DUFcxY98SjhNJU3h%2Bw6NwoWMLGg%2BswGOqUBQ%2FBgaaytAy%2FgYPE9QuDl2gpeaWRA20RHrzfmKAyrLybPpP5U6jWiNC9GgRf%2BV1zdiVbJ2BgAvm8qXQEHSnTP4vPiANmD6mobXJac99dbPIDP2mWMy7t2aJojZzSIUv7X3ZgNrqWtyfs4eUmfTDYBBWpjJ0EAz0q6MnrbmACYcp7MUL34DBIbhtOYFY0%2Ff7HMHuEW9L2djSYyGLD5TOPWebkXuNAn&X-Amz-Signature=0a144d0a31ccb7a72f415cf4dc2e5fef8fd80500d0075803d8b1840c09a510ef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667ZKO4VWI%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJGMEQCIE4InAcMaHI8UupxF%2F6dHJOq4CXarcOln5KMiw%2BHoKcZAiBhNQL3Rfvq9Ik9yd6eoH%2BjWuLLkSjewoc8KW324XUKsir%2FAwgHEAAaDDYzNzQyMzE4MzgwNSIMvI2I3zSh%2F1FuLT8JKtwDstHm5CMkqDla%2Frp3wOa3u7oMIfPu4oWYtGE3zSuJLqVsERIEmbfq9a%2F8heLMHLcBCCwhwJLPbuQnrgPO7bBRU6wvKAX3e68lrHr4ToWHZ%2FmjXsmoj8SlQa70E80GqerTbuHeXzFHXDM5l3%2FJhLghgVd2p6SjOwy4WE8%2FgGAHgNicIRk%2BvKpI71XeSfJs7IqMgqOb76D3A1ChWob9%2BC6rJHExu1zlf2JLrgksz6%2FpwwA7otbmN6bXD%2FOfN5w3hgDpJvcuKZBp3NgCheU2SblkJl19a6kCO%2BxItWYFuLpjIwikWtrGzkF90BVS5LV%2FC6Mvi87jkVndbP5w3nz%2BS5jErG%2Fxhxy2WmjlC46kILM49WPM5cf%2FmtyM9Udt0STiJIOCAjy8THsqh5gof2bvCWBl88n8S4eyAfQBKznzzmXe0oFaZlm2f9i8ok4q8QOnvFMKarqGHxeN2fptGMaSj371YKJ8OPSlvEqV1RAITG2rcXFSGFA5cmuEHi%2F1ZpaVwAnCdLoWaDeERDpDIrKf09Tt%2Bx%2Fi8vPuB9cbtGyWNT4pUZuGRoG%2FSXu9L%2FefiTK%2BHx5mHb7lWmWFTnv5HXW55teCbrfsdeFnRtUgrxlWdDQdPfWJdXZFqhQDKgAf8%2BMwy6H6zAY6pgHQmrSt9zO67axVyqZVQERe9wLe9QJG0VQrCS4KpFyt%2FDFX7kRxjc4eQvZTJLq%2B2FLhjj5pcvEBnvexIfIpJuwRPUjFyMggqC39qdjwhnZ1Gm4Zh76DPWcPls93%2Fmzsyi5eMZ2zarR7mHguyEuk84h6HgigMOO9pPwQLkktTkb5olmtx6o431kom4M2AdSq0XVrXFusjKJO0HlpE0vi4Qu%2BhZpuitsd&X-Amz-Signature=d8d78e41215620048443cd110acbed63519a7c33a706ffbf1c9444e4f5f23a6d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667ZKO4VWI%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJGMEQCIE4InAcMaHI8UupxF%2F6dHJOq4CXarcOln5KMiw%2BHoKcZAiBhNQL3Rfvq9Ik9yd6eoH%2BjWuLLkSjewoc8KW324XUKsir%2FAwgHEAAaDDYzNzQyMzE4MzgwNSIMvI2I3zSh%2F1FuLT8JKtwDstHm5CMkqDla%2Frp3wOa3u7oMIfPu4oWYtGE3zSuJLqVsERIEmbfq9a%2F8heLMHLcBCCwhwJLPbuQnrgPO7bBRU6wvKAX3e68lrHr4ToWHZ%2FmjXsmoj8SlQa70E80GqerTbuHeXzFHXDM5l3%2FJhLghgVd2p6SjOwy4WE8%2FgGAHgNicIRk%2BvKpI71XeSfJs7IqMgqOb76D3A1ChWob9%2BC6rJHExu1zlf2JLrgksz6%2FpwwA7otbmN6bXD%2FOfN5w3hgDpJvcuKZBp3NgCheU2SblkJl19a6kCO%2BxItWYFuLpjIwikWtrGzkF90BVS5LV%2FC6Mvi87jkVndbP5w3nz%2BS5jErG%2Fxhxy2WmjlC46kILM49WPM5cf%2FmtyM9Udt0STiJIOCAjy8THsqh5gof2bvCWBl88n8S4eyAfQBKznzzmXe0oFaZlm2f9i8ok4q8QOnvFMKarqGHxeN2fptGMaSj371YKJ8OPSlvEqV1RAITG2rcXFSGFA5cmuEHi%2F1ZpaVwAnCdLoWaDeERDpDIrKf09Tt%2Bx%2Fi8vPuB9cbtGyWNT4pUZuGRoG%2FSXu9L%2FefiTK%2BHx5mHb7lWmWFTnv5HXW55teCbrfsdeFnRtUgrxlWdDQdPfWJdXZFqhQDKgAf8%2BMwy6H6zAY6pgHQmrSt9zO67axVyqZVQERe9wLe9QJG0VQrCS4KpFyt%2FDFX7kRxjc4eQvZTJLq%2B2FLhjj5pcvEBnvexIfIpJuwRPUjFyMggqC39qdjwhnZ1Gm4Zh76DPWcPls93%2Fmzsyi5eMZ2zarR7mHguyEuk84h6HgigMOO9pPwQLkktTkb5olmtx6o431kom4M2AdSq0XVrXFusjKJO0HlpE0vi4Qu%2BhZpuitsd&X-Amz-Signature=0058f68300c8bfc489d2bd9f2f3655dc594936ede9e8a19397775a5e01c263f8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667ZKO4VWI%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJGMEQCIE4InAcMaHI8UupxF%2F6dHJOq4CXarcOln5KMiw%2BHoKcZAiBhNQL3Rfvq9Ik9yd6eoH%2BjWuLLkSjewoc8KW324XUKsir%2FAwgHEAAaDDYzNzQyMzE4MzgwNSIMvI2I3zSh%2F1FuLT8JKtwDstHm5CMkqDla%2Frp3wOa3u7oMIfPu4oWYtGE3zSuJLqVsERIEmbfq9a%2F8heLMHLcBCCwhwJLPbuQnrgPO7bBRU6wvKAX3e68lrHr4ToWHZ%2FmjXsmoj8SlQa70E80GqerTbuHeXzFHXDM5l3%2FJhLghgVd2p6SjOwy4WE8%2FgGAHgNicIRk%2BvKpI71XeSfJs7IqMgqOb76D3A1ChWob9%2BC6rJHExu1zlf2JLrgksz6%2FpwwA7otbmN6bXD%2FOfN5w3hgDpJvcuKZBp3NgCheU2SblkJl19a6kCO%2BxItWYFuLpjIwikWtrGzkF90BVS5LV%2FC6Mvi87jkVndbP5w3nz%2BS5jErG%2Fxhxy2WmjlC46kILM49WPM5cf%2FmtyM9Udt0STiJIOCAjy8THsqh5gof2bvCWBl88n8S4eyAfQBKznzzmXe0oFaZlm2f9i8ok4q8QOnvFMKarqGHxeN2fptGMaSj371YKJ8OPSlvEqV1RAITG2rcXFSGFA5cmuEHi%2F1ZpaVwAnCdLoWaDeERDpDIrKf09Tt%2Bx%2Fi8vPuB9cbtGyWNT4pUZuGRoG%2FSXu9L%2FefiTK%2BHx5mHb7lWmWFTnv5HXW55teCbrfsdeFnRtUgrxlWdDQdPfWJdXZFqhQDKgAf8%2BMwy6H6zAY6pgHQmrSt9zO67axVyqZVQERe9wLe9QJG0VQrCS4KpFyt%2FDFX7kRxjc4eQvZTJLq%2B2FLhjj5pcvEBnvexIfIpJuwRPUjFyMggqC39qdjwhnZ1Gm4Zh76DPWcPls93%2Fmzsyi5eMZ2zarR7mHguyEuk84h6HgigMOO9pPwQLkktTkb5olmtx6o431kom4M2AdSq0XVrXFusjKJO0HlpE0vi4Qu%2BhZpuitsd&X-Amz-Signature=d09d9c854c956d44989a17a57135b24ccac5ef88c1fdc52a4793f2d553f52928&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667ZKO4VWI%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJGMEQCIE4InAcMaHI8UupxF%2F6dHJOq4CXarcOln5KMiw%2BHoKcZAiBhNQL3Rfvq9Ik9yd6eoH%2BjWuLLkSjewoc8KW324XUKsir%2FAwgHEAAaDDYzNzQyMzE4MzgwNSIMvI2I3zSh%2F1FuLT8JKtwDstHm5CMkqDla%2Frp3wOa3u7oMIfPu4oWYtGE3zSuJLqVsERIEmbfq9a%2F8heLMHLcBCCwhwJLPbuQnrgPO7bBRU6wvKAX3e68lrHr4ToWHZ%2FmjXsmoj8SlQa70E80GqerTbuHeXzFHXDM5l3%2FJhLghgVd2p6SjOwy4WE8%2FgGAHgNicIRk%2BvKpI71XeSfJs7IqMgqOb76D3A1ChWob9%2BC6rJHExu1zlf2JLrgksz6%2FpwwA7otbmN6bXD%2FOfN5w3hgDpJvcuKZBp3NgCheU2SblkJl19a6kCO%2BxItWYFuLpjIwikWtrGzkF90BVS5LV%2FC6Mvi87jkVndbP5w3nz%2BS5jErG%2Fxhxy2WmjlC46kILM49WPM5cf%2FmtyM9Udt0STiJIOCAjy8THsqh5gof2bvCWBl88n8S4eyAfQBKznzzmXe0oFaZlm2f9i8ok4q8QOnvFMKarqGHxeN2fptGMaSj371YKJ8OPSlvEqV1RAITG2rcXFSGFA5cmuEHi%2F1ZpaVwAnCdLoWaDeERDpDIrKf09Tt%2Bx%2Fi8vPuB9cbtGyWNT4pUZuGRoG%2FSXu9L%2FefiTK%2BHx5mHb7lWmWFTnv5HXW55teCbrfsdeFnRtUgrxlWdDQdPfWJdXZFqhQDKgAf8%2BMwy6H6zAY6pgHQmrSt9zO67axVyqZVQERe9wLe9QJG0VQrCS4KpFyt%2FDFX7kRxjc4eQvZTJLq%2B2FLhjj5pcvEBnvexIfIpJuwRPUjFyMggqC39qdjwhnZ1Gm4Zh76DPWcPls93%2Fmzsyi5eMZ2zarR7mHguyEuk84h6HgigMOO9pPwQLkktTkb5olmtx6o431kom4M2AdSq0XVrXFusjKJO0HlpE0vi4Qu%2BhZpuitsd&X-Amz-Signature=223d4316cd862b33f9d664253e4a9b2caa524369af66addac069f815dbde869c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656A7EYQQ%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084945Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJGMEQCIBLodukd%2F6JkYH1dQA87g7gsdFV%2F20j4m8TLnTFiyp8HAiAZ8h66tCBiUhtpmyaR24XK0hwapbJBs9WENFgTl6tYdir%2FAwgHEAAaDDYzNzQyMzE4MzgwNSIMGSAv421O2L66rBzzKtwDePg%2B7%2B7jKAMZjfmNIys4e03D%2BTdB0F%2Fso5ZYWZGa0hHaGPeFb9azu7jlqVkJdYJl8qCNexVNanhbrUZ1Ck1skYDIIDvtGiuKsYmHMqvpei7AwU8zPCUOfuqCj%2BkpTbI8rfXRnk2fd727z9SCg3iMGnmr1snu5hGrQQfj0rQborCh6%2F2xADa%2BbLr1fnR2n3asMwVZLEO8Zr%2FBQDO3ZFDVKkDKJoGQQ0u02pq2v7YiVPr2Dr%2BhMiUTr26hA4MB9hSdIIACezaIjzA19anBlxgpZipNX5C0%2FGm%2FQVcXYcwLNblnTBib98BCpRgHq%2FLZ8u9Bo2k9x65B6zYsoUuuYhcGY%2FyVCW%2FWWHRZZyQn7gzWa9Am35MEv0KPBTzGwM3Le1UEhFUM9S5LstbEbct62EGO7W%2B%2BFfGXkkUCPGHX2YYCkIjYYHYD%2FZZD8B2RJEiGqihzoE1w9P%2BiWV6wk%2FLDKzmicwUss0%2BLt6Z4IgyHw%2BOzYuyquVp3E8ST46GXiycmxWyqxiQjcn%2FKBt6%2BBCWnzuoKjLUOPmFZ%2Fqkrj7Asfn2BbTRUpss9PH5Xi6jUNyycBcnGiwSlT6kwkq3oSL1xvugs15AhACbwZI59TX2FXTXbDBoIN4LzymnrvCtiw2Yw6qH6zAY6pgEJUloj7U3KWWlDR64m4osj%2FbODGeq8N96j0Ajb0CD4DkXSbkU0PM23B4P7seFVxqKiW1XO37lOVgD%2F5cQvjKT0gRUE2I%2B1kqDfSeGlGC7P9k8wGOAupfX9mL%2BA8Dz5OuhLlABzpyc9PnxwxAK30%2BWdqAzbSVdEIoNs2PgnE9LVg0Cmqgq0%2FqAt%2FKpQI6KgJAYOUjJ9Jt34Ub9Li8IAJBVmv5ptT5BI&X-Amz-Signature=0d706e152226c802c3a76ef59e118be67285290e1d055cd70d46e916ca7bc64d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46664R7SBG3%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084946Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJHMEUCIGcoUApC1QNvFXu84A9Ex1T2XDBvdxKcSGAAd0tLHGiiAiEA7S6SHUE0poTbwY8aPCr1loyK3Eke0OfA4fFKxTR9u6Mq%2FwMIBxAAGgw2Mzc0MjMxODM4MDUiDEzcFQtCAPUpxL8bByrcA1WHVXj9%2BpV49WVZBNTlKnf4alaEHbWymz0MMwpN8rlBjyY3r0u%2Fq0SDJsymxz6kY4TEWr90eDyFxjGnJ%2FPN%2BQ4ETauGpPN7jPyCID%2F%2B6D11VIB8kxUww9fca%2BttTIjfUeXqDT0l%2B8R%2FfPEGkjR%2FhijOt%2FDGH6kLedT13uP0P3gdyjNCwWEVNEdRf86UG3ZhuxqTjDwX2UsJ8DH1KThpS9OgQY%2Bky2wN9p5%2Byhuw2rWPxvEXrOUhzJdowzmV32DJt47i%2BUL3%2FmPs2s0et9TaKBB8O7nsZm0puf2nfgwgzskfSY5%2FERwii4nqySNhQENgtcWNeRL65GiBJ%2FHaJFvVFMHn0WbreQDGGZM0HfQGtGdiyX8ShYKNB1lkAkiVCpmoehnaS%2BGCWLH9cy2EPO2KfWGIUSPWTZn0XKg%2FDzLHLcozB0%2FvTczTGskrg%2BYGMSIvnMuL8i6pI5A0qXLyy91vFj%2Br5%2FKudo7TSdmJHP0tskl96zTuoZeXTMbtcoIykf5U0pYTfFcB993rBCWGExB8bZX7rTEEkdJMnqfs%2Bzi5f2EbTj%2BLCmDF1NI8s6v6KYOz6PiZ%2Fih4RsGTPVK1gTJcyhJlOVuP1K7zor5gFJBQxttJ0snXCA0MvYXldruBMJyg%2BswGOqUBczTWtkuA6KYzlWxESuuIflFSrk9eBmWMo7RalNe3LdWEOrx8cFzk%2BMKctqVj6DZ79rMZgpjVtF9Kf3N4bf8VYYDEff4sFPxlYmB3MV1hhYY0oINWQX3aS%2FA8HxLOwm681ZcRoCf4JqA%2Ftm9Pe02cWThrdbmiZ%2BfBlCOOtjta2Y2NyMQ9yDuNmVpmozVTcJo4yHvplTwuovGn%2BSiNb78q%2FsFeDGRv&X-Amz-Signature=23ec86b1e80950d5d5d487478fcc3ce0d90924e21294bb2ec878b89a4d8a8caa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46664R7SBG3%2F20260225%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260225T084946Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED4aCXVzLXdlc3QtMiJHMEUCIGcoUApC1QNvFXu84A9Ex1T2XDBvdxKcSGAAd0tLHGiiAiEA7S6SHUE0poTbwY8aPCr1loyK3Eke0OfA4fFKxTR9u6Mq%2FwMIBxAAGgw2Mzc0MjMxODM4MDUiDEzcFQtCAPUpxL8bByrcA1WHVXj9%2BpV49WVZBNTlKnf4alaEHbWymz0MMwpN8rlBjyY3r0u%2Fq0SDJsymxz6kY4TEWr90eDyFxjGnJ%2FPN%2BQ4ETauGpPN7jPyCID%2F%2B6D11VIB8kxUww9fca%2BttTIjfUeXqDT0l%2B8R%2FfPEGkjR%2FhijOt%2FDGH6kLedT13uP0P3gdyjNCwWEVNEdRf86UG3ZhuxqTjDwX2UsJ8DH1KThpS9OgQY%2Bky2wN9p5%2Byhuw2rWPxvEXrOUhzJdowzmV32DJt47i%2BUL3%2FmPs2s0et9TaKBB8O7nsZm0puf2nfgwgzskfSY5%2FERwii4nqySNhQENgtcWNeRL65GiBJ%2FHaJFvVFMHn0WbreQDGGZM0HfQGtGdiyX8ShYKNB1lkAkiVCpmoehnaS%2BGCWLH9cy2EPO2KfWGIUSPWTZn0XKg%2FDzLHLcozB0%2FvTczTGskrg%2BYGMSIvnMuL8i6pI5A0qXLyy91vFj%2Br5%2FKudo7TSdmJHP0tskl96zTuoZeXTMbtcoIykf5U0pYTfFcB993rBCWGExB8bZX7rTEEkdJMnqfs%2Bzi5f2EbTj%2BLCmDF1NI8s6v6KYOz6PiZ%2Fih4RsGTPVK1gTJcyhJlOVuP1K7zor5gFJBQxttJ0snXCA0MvYXldruBMJyg%2BswGOqUBczTWtkuA6KYzlWxESuuIflFSrk9eBmWMo7RalNe3LdWEOrx8cFzk%2BMKctqVj6DZ79rMZgpjVtF9Kf3N4bf8VYYDEff4sFPxlYmB3MV1hhYY0oINWQX3aS%2FA8HxLOwm681ZcRoCf4JqA%2Ftm9Pe02cWThrdbmiZ%2BfBlCOOtjta2Y2NyMQ9yDuNmVpmozVTcJo4yHvplTwuovGn%2BSiNb78q%2FsFeDGRv&X-Amz-Signature=0231dec2663767fb7e7bd176aca8171726f679645ec2a0b6579bf56af58a15a8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
