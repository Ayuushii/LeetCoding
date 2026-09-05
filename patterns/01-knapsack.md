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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QFHMKPHW%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113859Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQC9JjSTC7FEAnZoYUiWLpwtp8TVa5AzuxHgzYRs7zCMmwIgcynqzfpx4qCX8yDXyRR7TMZQ345wzzSwUsl5AGDcfO0q%2FwMICxAAGgw2Mzc0MjMxODM4MDUiDPZNjUZ9wm3kukeptCrcAw5RD82tT2MlzKl6QETW8bIDB3zSqoq6szjR9PqtcaSTam9R%2B0ibEe9%2BTKwKL9PHqegwoMDatzG%2BZsWeOWd1adZmPX7S858JjJwR971NPSwVYknRCbuBlheqhJUnAKHUfzPno%2BkhHaLbCW2WTgvVO%2Bgug6Pp63XmoJqZBUjVX%2Bo8IiqpOJ%2F03%2BWf3OUYmDXLi5iVWsmjKJ5N3Pj11vyIkRHKLjjoIoFoa6%2F3kBLphA%2BbMTS%2FgXKFoHGUAM8NoyuJGcK601tMJFcK4dJ244aatI4SKTPwSaQyzV64dmTx%2FSGbeFIAJKCFL9pHMbejp83v7jRVBQqwk9Auv3H2S1TY0yoPc%2BrwMmVPuDG8xDUtXlpcbyXCaRVWuScEhB3mhdumz1EUKzUpRFL65YAA9pRIYwGBO8gMpIshJAonQ1qYoCjjKC%2FR1r6cKPcxpLoogKcNLWbQkp7oIA%2FpMcAUe8rRn75qdPee0L0533HcNLrFY91iCQZNBVPqm1jtiGJfyoQiDwFBE03ctMcilvQuKojEoxO1onJHcCkmmVxwOAlA54lUuvdwsjk0sBNAxNnEK2EYNR4YrOsryoH6g5EHZy1WYZoMFvYnWJhCFjP%2Bu8wB1kKnPlTo2x5kjXd33z4EMK3Y79QGOqUBMdsE4lPzXLNZc3KWdiFyZW%2Ftakj9nwl4RMwOIo%2B7wxks8KjhZp0%2FjMBopXAUp3nl1nWwv6DgLvsiEoIxxeRKca6mUq%2FtFH9pfEJL3A0coRWrRIBGUy6GJV7VsJkYoaUqlgNW%2BmNauFPbDasL3EAjTHLMU%2F%2B3paUj0ZZIkXrfdCVhyavGNNCc8wXkF3LQvFEgBPHI7fnXR39wwCtltxoF5nRdSrQJ&X-Amz-Signature=edc4c8d0c98283fcf701bc637a1d1be87b663faf5d67cfc91649319f2ac385ef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QFHMKPHW%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113859Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQC9JjSTC7FEAnZoYUiWLpwtp8TVa5AzuxHgzYRs7zCMmwIgcynqzfpx4qCX8yDXyRR7TMZQ345wzzSwUsl5AGDcfO0q%2FwMICxAAGgw2Mzc0MjMxODM4MDUiDPZNjUZ9wm3kukeptCrcAw5RD82tT2MlzKl6QETW8bIDB3zSqoq6szjR9PqtcaSTam9R%2B0ibEe9%2BTKwKL9PHqegwoMDatzG%2BZsWeOWd1adZmPX7S858JjJwR971NPSwVYknRCbuBlheqhJUnAKHUfzPno%2BkhHaLbCW2WTgvVO%2Bgug6Pp63XmoJqZBUjVX%2Bo8IiqpOJ%2F03%2BWf3OUYmDXLi5iVWsmjKJ5N3Pj11vyIkRHKLjjoIoFoa6%2F3kBLphA%2BbMTS%2FgXKFoHGUAM8NoyuJGcK601tMJFcK4dJ244aatI4SKTPwSaQyzV64dmTx%2FSGbeFIAJKCFL9pHMbejp83v7jRVBQqwk9Auv3H2S1TY0yoPc%2BrwMmVPuDG8xDUtXlpcbyXCaRVWuScEhB3mhdumz1EUKzUpRFL65YAA9pRIYwGBO8gMpIshJAonQ1qYoCjjKC%2FR1r6cKPcxpLoogKcNLWbQkp7oIA%2FpMcAUe8rRn75qdPee0L0533HcNLrFY91iCQZNBVPqm1jtiGJfyoQiDwFBE03ctMcilvQuKojEoxO1onJHcCkmmVxwOAlA54lUuvdwsjk0sBNAxNnEK2EYNR4YrOsryoH6g5EHZy1WYZoMFvYnWJhCFjP%2Bu8wB1kKnPlTo2x5kjXd33z4EMK3Y79QGOqUBMdsE4lPzXLNZc3KWdiFyZW%2Ftakj9nwl4RMwOIo%2B7wxks8KjhZp0%2FjMBopXAUp3nl1nWwv6DgLvsiEoIxxeRKca6mUq%2FtFH9pfEJL3A0coRWrRIBGUy6GJV7VsJkYoaUqlgNW%2BmNauFPbDasL3EAjTHLMU%2F%2B3paUj0ZZIkXrfdCVhyavGNNCc8wXkF3LQvFEgBPHI7fnXR39wwCtltxoF5nRdSrQJ&X-Amz-Signature=a9e4784a2c66a99faf2e2fa843df56cec05745bf49ab1e83a4406b845ac6c97c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QFHMKPHW%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113859Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQC9JjSTC7FEAnZoYUiWLpwtp8TVa5AzuxHgzYRs7zCMmwIgcynqzfpx4qCX8yDXyRR7TMZQ345wzzSwUsl5AGDcfO0q%2FwMICxAAGgw2Mzc0MjMxODM4MDUiDPZNjUZ9wm3kukeptCrcAw5RD82tT2MlzKl6QETW8bIDB3zSqoq6szjR9PqtcaSTam9R%2B0ibEe9%2BTKwKL9PHqegwoMDatzG%2BZsWeOWd1adZmPX7S858JjJwR971NPSwVYknRCbuBlheqhJUnAKHUfzPno%2BkhHaLbCW2WTgvVO%2Bgug6Pp63XmoJqZBUjVX%2Bo8IiqpOJ%2F03%2BWf3OUYmDXLi5iVWsmjKJ5N3Pj11vyIkRHKLjjoIoFoa6%2F3kBLphA%2BbMTS%2FgXKFoHGUAM8NoyuJGcK601tMJFcK4dJ244aatI4SKTPwSaQyzV64dmTx%2FSGbeFIAJKCFL9pHMbejp83v7jRVBQqwk9Auv3H2S1TY0yoPc%2BrwMmVPuDG8xDUtXlpcbyXCaRVWuScEhB3mhdumz1EUKzUpRFL65YAA9pRIYwGBO8gMpIshJAonQ1qYoCjjKC%2FR1r6cKPcxpLoogKcNLWbQkp7oIA%2FpMcAUe8rRn75qdPee0L0533HcNLrFY91iCQZNBVPqm1jtiGJfyoQiDwFBE03ctMcilvQuKojEoxO1onJHcCkmmVxwOAlA54lUuvdwsjk0sBNAxNnEK2EYNR4YrOsryoH6g5EHZy1WYZoMFvYnWJhCFjP%2Bu8wB1kKnPlTo2x5kjXd33z4EMK3Y79QGOqUBMdsE4lPzXLNZc3KWdiFyZW%2Ftakj9nwl4RMwOIo%2B7wxks8KjhZp0%2FjMBopXAUp3nl1nWwv6DgLvsiEoIxxeRKca6mUq%2FtFH9pfEJL3A0coRWrRIBGUy6GJV7VsJkYoaUqlgNW%2BmNauFPbDasL3EAjTHLMU%2F%2B3paUj0ZZIkXrfdCVhyavGNNCc8wXkF3LQvFEgBPHI7fnXR39wwCtltxoF5nRdSrQJ&X-Amz-Signature=c6a4664112a67863ce6169d32d39bad55290a0d64ec76f965810bb94aa18b843&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TXNJV45D%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113859Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQDpYJgUUi%2BWaoFAKI4TtxEscN1532XnWhbnoaCRnRjaYwIgVKeQRbe%2BXZz8OpJEDlnvLc9DToMCscHIIIfBb%2F6UfSYq%2FwMICxAAGgw2Mzc0MjMxODM4MDUiDN0yItNM5H%2Fz4ogEDyrcA0R6PsNrZ6hey2oArZIfcL3%2BYZ%2Buqh0NDl3KSpIO4LAFnmNapHGUh9jScFhzpHBj3drVMHucW4v3atQTnWfkbJC5zoOZmma0ykpXx91m4A2VCMFncRtXcMeIeSSKesa5h7967BEXlw08HPof1YHJHbPLFayhvoueeXp3Wn7J8M6rFDRL%2BmYYyCDtC7O0LsRUVXJZSWGwgf3mwbbGf08RnP9NQR34yWuWvg71Vv8R1FXknzScHk5WujhalPwElnvjJDHwVi%2Bk2EJEf9zmHWFcCkUVyIdKS8%2BMkOFBR%2FkO3sHsRgmdDBBlRz0lQQ1nKigcMrN5OYLvqZgZz8%2BCtPAfQX3QqrFKWV8om7Zcclyq8qrmSkK%2Fc087pntuYpc5bEWl%2FFpeOWt8Etu40l8kbINZdrZ5fETtZGbFvkBWe5PwNV7xEUCSO8Nx9yv%2BLgeWpaFe%2FMFICDXhdYesWDsoJc7WcUgt6xp69veQ0L4Q%2FtR3wB40b61vcow3Nr%2FaNQW%2B8rmV10Lx2kvKOlUdOjwRymMtQ11nftvTC7RuXCRgjIrJb%2ByLoSDVbG7I6sY0VzJpoHpkcx7SsF%2FXkTMCduL5zTlngXrXSDbjyPaNDwjcI8Ti9ax%2BrXudQipUmTpOsqSiMP%2FV79QGOqUBQMd3z8JQeFLaNSkPkYZyi5AT9gw5qeVcivPFZhrkiWPJkx8qZNemD5L%2F8jq69gnBsQOMmqey0K3NMkGwudMqRyj8EFI6yTyzypduFCI0XcxBJRqv13s5rhePLrIJNuGOSpc0Dvcaf6bMq1chm%2B92ca%2BxqggBpB161NXVksfL7OU4w6ZaJ88KJDOiaAxe3X1NlnLDnUsqm4%2BUZMJukKkkm6rJct9g&X-Amz-Signature=152adc66c1af8b2966cf9ce2fe318eebd75ae900587fb33921a9e776d40a5b2a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TXNJV45D%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113859Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQDpYJgUUi%2BWaoFAKI4TtxEscN1532XnWhbnoaCRnRjaYwIgVKeQRbe%2BXZz8OpJEDlnvLc9DToMCscHIIIfBb%2F6UfSYq%2FwMICxAAGgw2Mzc0MjMxODM4MDUiDN0yItNM5H%2Fz4ogEDyrcA0R6PsNrZ6hey2oArZIfcL3%2BYZ%2Buqh0NDl3KSpIO4LAFnmNapHGUh9jScFhzpHBj3drVMHucW4v3atQTnWfkbJC5zoOZmma0ykpXx91m4A2VCMFncRtXcMeIeSSKesa5h7967BEXlw08HPof1YHJHbPLFayhvoueeXp3Wn7J8M6rFDRL%2BmYYyCDtC7O0LsRUVXJZSWGwgf3mwbbGf08RnP9NQR34yWuWvg71Vv8R1FXknzScHk5WujhalPwElnvjJDHwVi%2Bk2EJEf9zmHWFcCkUVyIdKS8%2BMkOFBR%2FkO3sHsRgmdDBBlRz0lQQ1nKigcMrN5OYLvqZgZz8%2BCtPAfQX3QqrFKWV8om7Zcclyq8qrmSkK%2Fc087pntuYpc5bEWl%2FFpeOWt8Etu40l8kbINZdrZ5fETtZGbFvkBWe5PwNV7xEUCSO8Nx9yv%2BLgeWpaFe%2FMFICDXhdYesWDsoJc7WcUgt6xp69veQ0L4Q%2FtR3wB40b61vcow3Nr%2FaNQW%2B8rmV10Lx2kvKOlUdOjwRymMtQ11nftvTC7RuXCRgjIrJb%2ByLoSDVbG7I6sY0VzJpoHpkcx7SsF%2FXkTMCduL5zTlngXrXSDbjyPaNDwjcI8Ti9ax%2BrXudQipUmTpOsqSiMP%2FV79QGOqUBQMd3z8JQeFLaNSkPkYZyi5AT9gw5qeVcivPFZhrkiWPJkx8qZNemD5L%2F8jq69gnBsQOMmqey0K3NMkGwudMqRyj8EFI6yTyzypduFCI0XcxBJRqv13s5rhePLrIJNuGOSpc0Dvcaf6bMq1chm%2B92ca%2BxqggBpB161NXVksfL7OU4w6ZaJ88KJDOiaAxe3X1NlnLDnUsqm4%2BUZMJukKkkm6rJct9g&X-Amz-Signature=f59a9fd5f28df85951028a2f104d0294c6589aa2ef5154b9694b942d50a085d1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TXNJV45D%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113859Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQDpYJgUUi%2BWaoFAKI4TtxEscN1532XnWhbnoaCRnRjaYwIgVKeQRbe%2BXZz8OpJEDlnvLc9DToMCscHIIIfBb%2F6UfSYq%2FwMICxAAGgw2Mzc0MjMxODM4MDUiDN0yItNM5H%2Fz4ogEDyrcA0R6PsNrZ6hey2oArZIfcL3%2BYZ%2Buqh0NDl3KSpIO4LAFnmNapHGUh9jScFhzpHBj3drVMHucW4v3atQTnWfkbJC5zoOZmma0ykpXx91m4A2VCMFncRtXcMeIeSSKesa5h7967BEXlw08HPof1YHJHbPLFayhvoueeXp3Wn7J8M6rFDRL%2BmYYyCDtC7O0LsRUVXJZSWGwgf3mwbbGf08RnP9NQR34yWuWvg71Vv8R1FXknzScHk5WujhalPwElnvjJDHwVi%2Bk2EJEf9zmHWFcCkUVyIdKS8%2BMkOFBR%2FkO3sHsRgmdDBBlRz0lQQ1nKigcMrN5OYLvqZgZz8%2BCtPAfQX3QqrFKWV8om7Zcclyq8qrmSkK%2Fc087pntuYpc5bEWl%2FFpeOWt8Etu40l8kbINZdrZ5fETtZGbFvkBWe5PwNV7xEUCSO8Nx9yv%2BLgeWpaFe%2FMFICDXhdYesWDsoJc7WcUgt6xp69veQ0L4Q%2FtR3wB40b61vcow3Nr%2FaNQW%2B8rmV10Lx2kvKOlUdOjwRymMtQ11nftvTC7RuXCRgjIrJb%2ByLoSDVbG7I6sY0VzJpoHpkcx7SsF%2FXkTMCduL5zTlngXrXSDbjyPaNDwjcI8Ti9ax%2BrXudQipUmTpOsqSiMP%2FV79QGOqUBQMd3z8JQeFLaNSkPkYZyi5AT9gw5qeVcivPFZhrkiWPJkx8qZNemD5L%2F8jq69gnBsQOMmqey0K3NMkGwudMqRyj8EFI6yTyzypduFCI0XcxBJRqv13s5rhePLrIJNuGOSpc0Dvcaf6bMq1chm%2B92ca%2BxqggBpB161NXVksfL7OU4w6ZaJ88KJDOiaAxe3X1NlnLDnUsqm4%2BUZMJukKkkm6rJct9g&X-Amz-Signature=2d163dfb48d91751df07ec13d7bdf724163dcc79bc11e6d66b43515588a50758&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TXNJV45D%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113859Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQDpYJgUUi%2BWaoFAKI4TtxEscN1532XnWhbnoaCRnRjaYwIgVKeQRbe%2BXZz8OpJEDlnvLc9DToMCscHIIIfBb%2F6UfSYq%2FwMICxAAGgw2Mzc0MjMxODM4MDUiDN0yItNM5H%2Fz4ogEDyrcA0R6PsNrZ6hey2oArZIfcL3%2BYZ%2Buqh0NDl3KSpIO4LAFnmNapHGUh9jScFhzpHBj3drVMHucW4v3atQTnWfkbJC5zoOZmma0ykpXx91m4A2VCMFncRtXcMeIeSSKesa5h7967BEXlw08HPof1YHJHbPLFayhvoueeXp3Wn7J8M6rFDRL%2BmYYyCDtC7O0LsRUVXJZSWGwgf3mwbbGf08RnP9NQR34yWuWvg71Vv8R1FXknzScHk5WujhalPwElnvjJDHwVi%2Bk2EJEf9zmHWFcCkUVyIdKS8%2BMkOFBR%2FkO3sHsRgmdDBBlRz0lQQ1nKigcMrN5OYLvqZgZz8%2BCtPAfQX3QqrFKWV8om7Zcclyq8qrmSkK%2Fc087pntuYpc5bEWl%2FFpeOWt8Etu40l8kbINZdrZ5fETtZGbFvkBWe5PwNV7xEUCSO8Nx9yv%2BLgeWpaFe%2FMFICDXhdYesWDsoJc7WcUgt6xp69veQ0L4Q%2FtR3wB40b61vcow3Nr%2FaNQW%2B8rmV10Lx2kvKOlUdOjwRymMtQ11nftvTC7RuXCRgjIrJb%2ByLoSDVbG7I6sY0VzJpoHpkcx7SsF%2FXkTMCduL5zTlngXrXSDbjyPaNDwjcI8Ti9ax%2BrXudQipUmTpOsqSiMP%2FV79QGOqUBQMd3z8JQeFLaNSkPkYZyi5AT9gw5qeVcivPFZhrkiWPJkx8qZNemD5L%2F8jq69gnBsQOMmqey0K3NMkGwudMqRyj8EFI6yTyzypduFCI0XcxBJRqv13s5rhePLrIJNuGOSpc0Dvcaf6bMq1chm%2B92ca%2BxqggBpB161NXVksfL7OU4w6ZaJ88KJDOiaAxe3X1NlnLDnUsqm4%2BUZMJukKkkm6rJct9g&X-Amz-Signature=d58d014433783a1b1d954cb774fd7c2331473107efc329a5177481dc84f90438&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZGZFHWEY%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113900Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJIMEYCIQDSq%2FeME2QBH2kJI28Epw7o606WrPC%2BGQlSI2vSuqSUcwIhAL70n%2BMdfEDUuRaqyDOMNf7g4kskJg5XLzMofw1LrqxDKv8DCAsQABoMNjM3NDIzMTgzODA1IgzvSLQed%2FezQGcnWKQq3AOAzDxullW0TsvN8NAu3QTUi3p2xL6LXe%2Fqt8sXjkWEwfszSxrNWLnCMNWMi5JaCMWnpYmMlKTxbFnRnLHbbI%2ByC%2Fz6s1c3UyhLTHQGl6ri9Y4Il3nNx1KlcywwgaOYW9XUupSFu8jBdLdJwpI0UPTV9b%2BStSIR5HtgAaG0auZucgaMjJS4u31CQqR%2BsOGxBKYatR1RUj0hn52gcZNqfPT0QghIsBjjSVwDiUA4NhKQRDdTwKNuU1RM0sQrd9id2rL0Lzd9EXP1VHQxLgp5H0fJ9gJOr9TKoeyohAWjbh5O0cs%2FKWxxn8NP2xvAGocPolDbUNGG10x0%2B5Mt7vBNRmJPJBQOWlcqpGDkb%2B03Z3pPgkaXXtlTvendX1GmmNnIvSqcSAvEIQrf3p4APrcLVqAAwY4PHd7O87oiTfNz5wf7OphJsj5IK62C4JrmHkj479FDO6f1z3IlnTQQyJxYZaNCPQ7WCTZH2VpWQCoPcmKmbGjX3YElffyPvxK68cZW03Zhuiz7CDD%2FDfcvheUd84mtC5bUXqymDVdZyUmJubYXVY6wDK0%2B4RMeqgRa5kS%2FXWP%2B4T2OMukYwnI68A360DK1GOxmXfrZcChAroKyJdbHX1CxZaGbRVudaRGxfDCb2O%2FUBjqkAWfVCebi%2BjDAzSxzchAfLU%2FH59ikq2W3%2BO%2BDfUQQdhwo%2F6z375USPxjvnNTljLHxDBjWMr9M0pApJFlgX25wqldFr%2BcvKblK7HqCHrkpYXwqSiQb6x7CEsdV1WnCh97seuqiwRSCInYNNoRxjZXXj75YMp8hpC79IxpCR880CogAUprNWpFYJCtHXmUImkSeyJy%2FGZeEgB7VOcjFBecuF5dvwDB6&X-Amz-Signature=a933b992ac38eac0cda114087903a447e427f9511f1809163c39d427f347dc89&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QV4SUB5A%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113900Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCICV5334%2BWtLEYi5oqAKaHxiP%2BtUAw%2FfoFgl%2FDbRy3mguAiBdQl9CNe%2BPM4hrtGrjGC5Xy2ou4ZkFQdD9Cy2pgxOhlCr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMxtPgBfkA2G0Gxj4RKtwDFBJjBf5D7BYr74UKMvwsl2V395jUP3blvCRAGhrMpz2w4BipS0Nm%2BIqmr3yqk4Ivxy4OsvBW0Fmm92jrgAksF6WQKUGKiarvV0njClKFiS7Mtj%2FgBwC%2BYc6%2Fv7a0bU1Uh4ClFykCK73hncWh8s4O6C6nzCb8ObnTEx0VF7MY0shiLAk%2BYewOksrVNbrs2M0wsRcWRqa%2FHUlDreLb7nrc8tpRZMTff7j09RMMLnqGIdKZ7g0eNePhTn%2BVI6lG7TNpiVvQWx1KX3XLtIe2aNR56VGzQjpyp0sOKU5FZ%2FmbrYCIHOhMhU01LwrSyTrvQ3EU%2FK1in6bhCRgWP2rxo7KVTJ%2B%2BXgJ4oiXxpDvMaNtlURMwifZFnTP0IHa6I7DspoFqF5%2FOjIlcK5f7Tj29Ps%2FqQRn2BW0xpf80kcqwiLViUPfHRqIp4%2B6GGFcfElXjd%2FgWw%2FiEZPnTw2p2RzwkAIov%2BwUbgcF3XFKHBQ%2FBgqaArPEubuu8KnFcpENB1nYoDtSdo%2FVg707crBcNW6I1CWB5MNBQMxUNNx6mXpdCy4S0vUByw4WTbbmfzDRn9aL9apBefWhyU4X3N3vSIreYkA9I%2BtKcW7JElGH64PtU%2F%2BTLJo1Ge5cps2vUEHIKm70w6Nfv1AY6pgHh%2B7lT17IBLw5GQRR3TcqBmZ9fOkt0VPU%2BkqOXWh0%2FHnjYpkMNNHkuIjt%2BdXFiPiyqGJv0M16L6QIhovynDrAOQ3QV5ud1ME552nkNTftEJrhRoIaVl05YLQk35j2oza7ehIqaD061XdOi4S0u8RIU0AHfOLxNukY4i896frj%2BlM0O6lAsqC4U1gcL%2FxAt3KkWrATyzC3GBhB%2F4QJRF%2BH7azifV9%2FY&X-Amz-Signature=0ca28db6b7f72c62121b65906b5e88c70b142132cafb9d44949e339fbd6c5e91&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QV4SUB5A%2F20260905%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260905T113900Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCICV5334%2BWtLEYi5oqAKaHxiP%2BtUAw%2FfoFgl%2FDbRy3mguAiBdQl9CNe%2BPM4hrtGrjGC5Xy2ou4ZkFQdD9Cy2pgxOhlCr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMxtPgBfkA2G0Gxj4RKtwDFBJjBf5D7BYr74UKMvwsl2V395jUP3blvCRAGhrMpz2w4BipS0Nm%2BIqmr3yqk4Ivxy4OsvBW0Fmm92jrgAksF6WQKUGKiarvV0njClKFiS7Mtj%2FgBwC%2BYc6%2Fv7a0bU1Uh4ClFykCK73hncWh8s4O6C6nzCb8ObnTEx0VF7MY0shiLAk%2BYewOksrVNbrs2M0wsRcWRqa%2FHUlDreLb7nrc8tpRZMTff7j09RMMLnqGIdKZ7g0eNePhTn%2BVI6lG7TNpiVvQWx1KX3XLtIe2aNR56VGzQjpyp0sOKU5FZ%2FmbrYCIHOhMhU01LwrSyTrvQ3EU%2FK1in6bhCRgWP2rxo7KVTJ%2B%2BXgJ4oiXxpDvMaNtlURMwifZFnTP0IHa6I7DspoFqF5%2FOjIlcK5f7Tj29Ps%2FqQRn2BW0xpf80kcqwiLViUPfHRqIp4%2B6GGFcfElXjd%2FgWw%2FiEZPnTw2p2RzwkAIov%2BwUbgcF3XFKHBQ%2FBgqaArPEubuu8KnFcpENB1nYoDtSdo%2FVg707crBcNW6I1CWB5MNBQMxUNNx6mXpdCy4S0vUByw4WTbbmfzDRn9aL9apBefWhyU4X3N3vSIreYkA9I%2BtKcW7JElGH64PtU%2F%2BTLJo1Ge5cps2vUEHIKm70w6Nfv1AY6pgHh%2B7lT17IBLw5GQRR3TcqBmZ9fOkt0VPU%2BkqOXWh0%2FHnjYpkMNNHkuIjt%2BdXFiPiyqGJv0M16L6QIhovynDrAOQ3QV5ud1ME552nkNTftEJrhRoIaVl05YLQk35j2oza7ehIqaD061XdOi4S0u8RIU0AHfOLxNukY4i896frj%2BlM0O6lAsqC4U1gcL%2FxAt3KkWrATyzC3GBhB%2F4QJRF%2BH7azifV9%2FY&X-Amz-Signature=1692bbb118641607768f760f41b5f568ea0d3a60b5f8a3675d73b44130f5bc88&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
