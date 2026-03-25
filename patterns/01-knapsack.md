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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZFOBASNV%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCID6Pj83RK%2FGFyf9OmHV7XVwrY1laeSDFPr%2BOij%2F3lxeaAiBEUz4mS0I1CneIwxbz%2BepIpbUf8PsiWUJo806OVt%2B1GyqIBAip%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4xwwhbVJPEAP6cmNKtwDskxAWwqDUiN63me21VpTwJR9TAJGtG0IAiqtq6fnvWp1NwmwiUeHk2OhajsU5IDhIRDlOeuySqvACXQV1hB7h0eLyjdSrrJ2xeZp2YUTL5blMSkbVcRqRrQol4AcuzQ1QcPCR3AYSgW4IBO670eQMy6HeuEE1U4jEoMiadwlyBSvrb7YOMWV22GER3zhT260%2B0zZvAArOtP0%2B9cG1qYyNMtvbX2fqkol3HuIrOZIUmFY%2F843c3jof0lu7%2F%2FdqjrhHkoxszAX9JoYRf8sGv7sXptUxWo9xqb%2F0KjrHpOwstKkg6CESzDNqu8z0EMTXpC5lhBILMNE6xi99TfVWfkxIyPJPL48u7QiR3fjGxbTsLk72wK3JHsu83uVQ7iBR3k6PxdjpMmxAcn1Jd7dxHRSnIv0tzDqdh%2BcwZ7FbYC4p4Vur9Fk4KOmeBpcYNDbZLEiFOj6X6KOZ6acgx%2B1gLoXibXts9rXicWzLJS77NOpt03opFnq9o7PZTVAG%2FjCX3fn9MyP9onmW%2Fa%2BxpFnW%2BwZdvtSTsOPLTQ7npZ6hXRUAnF5ILE9qhMcapjIRPlRHr8iktd8n3zVIXbqXpnz%2Bvx7r1lGAM%2FlzPvjc6V2gWSgM1bq1udI5j9jl8%2BfhFowyquOzgY6pgH2TVz%2FV27Ud%2F%2BMbFCzxcZjwNiBpGiuS3baQy45Q8UICWx5ep6jrdH48vUctvIqFBPfNc0VNgtNkYIF4J%2Brk7O2HgKsk6ZDWhQaaUAqRvwOuwvJUImb2QMoJ3lYIvYu776NUClBNsyC1pWw4HDD99NimytX741dd9Rws0cswNKnWAcb8U2FC%2BInIfw0qekykprQeA%2B1iryUv2nIKICeE6W2r545g0Ya&X-Amz-Signature=9f258c90b7b08ed4e932196d356e647de258adedd36e8cc940d3a9ee82294aed&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZFOBASNV%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCID6Pj83RK%2FGFyf9OmHV7XVwrY1laeSDFPr%2BOij%2F3lxeaAiBEUz4mS0I1CneIwxbz%2BepIpbUf8PsiWUJo806OVt%2B1GyqIBAip%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4xwwhbVJPEAP6cmNKtwDskxAWwqDUiN63me21VpTwJR9TAJGtG0IAiqtq6fnvWp1NwmwiUeHk2OhajsU5IDhIRDlOeuySqvACXQV1hB7h0eLyjdSrrJ2xeZp2YUTL5blMSkbVcRqRrQol4AcuzQ1QcPCR3AYSgW4IBO670eQMy6HeuEE1U4jEoMiadwlyBSvrb7YOMWV22GER3zhT260%2B0zZvAArOtP0%2B9cG1qYyNMtvbX2fqkol3HuIrOZIUmFY%2F843c3jof0lu7%2F%2FdqjrhHkoxszAX9JoYRf8sGv7sXptUxWo9xqb%2F0KjrHpOwstKkg6CESzDNqu8z0EMTXpC5lhBILMNE6xi99TfVWfkxIyPJPL48u7QiR3fjGxbTsLk72wK3JHsu83uVQ7iBR3k6PxdjpMmxAcn1Jd7dxHRSnIv0tzDqdh%2BcwZ7FbYC4p4Vur9Fk4KOmeBpcYNDbZLEiFOj6X6KOZ6acgx%2B1gLoXibXts9rXicWzLJS77NOpt03opFnq9o7PZTVAG%2FjCX3fn9MyP9onmW%2Fa%2BxpFnW%2BwZdvtSTsOPLTQ7npZ6hXRUAnF5ILE9qhMcapjIRPlRHr8iktd8n3zVIXbqXpnz%2Bvx7r1lGAM%2FlzPvjc6V2gWSgM1bq1udI5j9jl8%2BfhFowyquOzgY6pgH2TVz%2FV27Ud%2F%2BMbFCzxcZjwNiBpGiuS3baQy45Q8UICWx5ep6jrdH48vUctvIqFBPfNc0VNgtNkYIF4J%2Brk7O2HgKsk6ZDWhQaaUAqRvwOuwvJUImb2QMoJ3lYIvYu776NUClBNsyC1pWw4HDD99NimytX741dd9Rws0cswNKnWAcb8U2FC%2BInIfw0qekykprQeA%2B1iryUv2nIKICeE6W2r545g0Ya&X-Amz-Signature=9754944518cd5ece0635e735442370d6305b5c9d1f1affd32cc12cb39b51f997&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZFOBASNV%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCID6Pj83RK%2FGFyf9OmHV7XVwrY1laeSDFPr%2BOij%2F3lxeaAiBEUz4mS0I1CneIwxbz%2BepIpbUf8PsiWUJo806OVt%2B1GyqIBAip%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4xwwhbVJPEAP6cmNKtwDskxAWwqDUiN63me21VpTwJR9TAJGtG0IAiqtq6fnvWp1NwmwiUeHk2OhajsU5IDhIRDlOeuySqvACXQV1hB7h0eLyjdSrrJ2xeZp2YUTL5blMSkbVcRqRrQol4AcuzQ1QcPCR3AYSgW4IBO670eQMy6HeuEE1U4jEoMiadwlyBSvrb7YOMWV22GER3zhT260%2B0zZvAArOtP0%2B9cG1qYyNMtvbX2fqkol3HuIrOZIUmFY%2F843c3jof0lu7%2F%2FdqjrhHkoxszAX9JoYRf8sGv7sXptUxWo9xqb%2F0KjrHpOwstKkg6CESzDNqu8z0EMTXpC5lhBILMNE6xi99TfVWfkxIyPJPL48u7QiR3fjGxbTsLk72wK3JHsu83uVQ7iBR3k6PxdjpMmxAcn1Jd7dxHRSnIv0tzDqdh%2BcwZ7FbYC4p4Vur9Fk4KOmeBpcYNDbZLEiFOj6X6KOZ6acgx%2B1gLoXibXts9rXicWzLJS77NOpt03opFnq9o7PZTVAG%2FjCX3fn9MyP9onmW%2Fa%2BxpFnW%2BwZdvtSTsOPLTQ7npZ6hXRUAnF5ILE9qhMcapjIRPlRHr8iktd8n3zVIXbqXpnz%2Bvx7r1lGAM%2FlzPvjc6V2gWSgM1bq1udI5j9jl8%2BfhFowyquOzgY6pgH2TVz%2FV27Ud%2F%2BMbFCzxcZjwNiBpGiuS3baQy45Q8UICWx5ep6jrdH48vUctvIqFBPfNc0VNgtNkYIF4J%2Brk7O2HgKsk6ZDWhQaaUAqRvwOuwvJUImb2QMoJ3lYIvYu776NUClBNsyC1pWw4HDD99NimytX741dd9Rws0cswNKnWAcb8U2FC%2BInIfw0qekykprQeA%2B1iryUv2nIKICeE6W2r545g0Ya&X-Amz-Signature=e1f225b8fafb3cd77738c183279c72a0d6cbd78dbecf9671ed289b17f84693fe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667GKJDLDF%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGl3Ip%2B8xeGGLqmxwjYZ9Hg%2F8cqfaCT9e018PI9PHYy9AiEAmdI2uVr0mPww7P%2FGiPlC1U6XAnWQwLc9RTHWX63OwPkqiAQIqf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDHbWdZjx5atfKJG1SrcA0gYlnDsd96olv1yQif%2BxC094EyUeXOuTtFeatFesSPqebQPVIrZyRBCufg0khcTp1fl8ateBe7rgTcMevUrsRb5c%2F%2BoU1RwgalhQrr5O4OwURewmR%2BcLOvN%2F3nTZVRKSdTSoZ%2BD7xOB03RQtRkXeQ7jRCUfLe6cTWN56FAD%2B%2F23XmS8p1trZ7qZsjRFJKbWFUPXex8Eg0Cc9vYjcHsZBKcXQS3y8wcB6r3al57uugvbslbqRg4ZRFPbRWNrAiblZnMLUEQZf1KG4T1%2FGlQhzGDGcruFji53r7k2pu43LvpMD9RlQcPn656WmHFgj0gMugZYrfHuqNSVTRhIvquioR1H7Yk08o6rAM0wMoWUejB1BfRV5gr43KYp%2FtEp4i9k9S9OwhKXfpDG4Ab0QMEC90gRhpPCxEv8wVmkqyNSJp7WjEoIri1mu%2Bfv5pWc0Ow9A0tE00r2nnPPmwH%2FbU3EIgOMzh5HWNVvUUZ2549rMWewuI7SnMU7kcp74m%2FFxK5zCLcsJOpXo6w8QX3N%2FZjhMetRXjmGsQLZZ2eO7Ffk74GQPCAOnnbsVwyj1HaqgOG6Q%2BuvWBIrNZxC2hqAiU%2FgCaUVwm103RuAWd0g5bTb%2BlycZMDuFM%2F5r6hERwR9MNaqjs4GOqUBGxibyHilazpAAD97AWbpZmHnwu0KVWrZ6DgAbIJrvKRlAq4JiA6Jbbggb3VVjgAT0jRzZTBaoFlGGNuzfFQcoInw2f5VzOISu7vKgUXqsx9Ir1WeGyPJcDspRyVfG6e4bCCzNEa%2FQzTbkY%2FLb4xxNeAvNoHjcDv%2FaY5r2qvV5GkH%2BQk8hqA9qhEV%2B1F%2B1CMIRswblaMTJyI5EkmDkMZ37wB3d2HQ&X-Amz-Signature=076becc8c687c7995de99eea200d548cb17fa8f5351b4de1ffb2de22e1731424&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667GKJDLDF%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGl3Ip%2B8xeGGLqmxwjYZ9Hg%2F8cqfaCT9e018PI9PHYy9AiEAmdI2uVr0mPww7P%2FGiPlC1U6XAnWQwLc9RTHWX63OwPkqiAQIqf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDHbWdZjx5atfKJG1SrcA0gYlnDsd96olv1yQif%2BxC094EyUeXOuTtFeatFesSPqebQPVIrZyRBCufg0khcTp1fl8ateBe7rgTcMevUrsRb5c%2F%2BoU1RwgalhQrr5O4OwURewmR%2BcLOvN%2F3nTZVRKSdTSoZ%2BD7xOB03RQtRkXeQ7jRCUfLe6cTWN56FAD%2B%2F23XmS8p1trZ7qZsjRFJKbWFUPXex8Eg0Cc9vYjcHsZBKcXQS3y8wcB6r3al57uugvbslbqRg4ZRFPbRWNrAiblZnMLUEQZf1KG4T1%2FGlQhzGDGcruFji53r7k2pu43LvpMD9RlQcPn656WmHFgj0gMugZYrfHuqNSVTRhIvquioR1H7Yk08o6rAM0wMoWUejB1BfRV5gr43KYp%2FtEp4i9k9S9OwhKXfpDG4Ab0QMEC90gRhpPCxEv8wVmkqyNSJp7WjEoIri1mu%2Bfv5pWc0Ow9A0tE00r2nnPPmwH%2FbU3EIgOMzh5HWNVvUUZ2549rMWewuI7SnMU7kcp74m%2FFxK5zCLcsJOpXo6w8QX3N%2FZjhMetRXjmGsQLZZ2eO7Ffk74GQPCAOnnbsVwyj1HaqgOG6Q%2BuvWBIrNZxC2hqAiU%2FgCaUVwm103RuAWd0g5bTb%2BlycZMDuFM%2F5r6hERwR9MNaqjs4GOqUBGxibyHilazpAAD97AWbpZmHnwu0KVWrZ6DgAbIJrvKRlAq4JiA6Jbbggb3VVjgAT0jRzZTBaoFlGGNuzfFQcoInw2f5VzOISu7vKgUXqsx9Ir1WeGyPJcDspRyVfG6e4bCCzNEa%2FQzTbkY%2FLb4xxNeAvNoHjcDv%2FaY5r2qvV5GkH%2BQk8hqA9qhEV%2B1F%2B1CMIRswblaMTJyI5EkmDkMZ37wB3d2HQ&X-Amz-Signature=22acd24ddf304d60f2ab17edd1a92db864e9c147b8888f43d3684a357a75197c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667GKJDLDF%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGl3Ip%2B8xeGGLqmxwjYZ9Hg%2F8cqfaCT9e018PI9PHYy9AiEAmdI2uVr0mPww7P%2FGiPlC1U6XAnWQwLc9RTHWX63OwPkqiAQIqf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDHbWdZjx5atfKJG1SrcA0gYlnDsd96olv1yQif%2BxC094EyUeXOuTtFeatFesSPqebQPVIrZyRBCufg0khcTp1fl8ateBe7rgTcMevUrsRb5c%2F%2BoU1RwgalhQrr5O4OwURewmR%2BcLOvN%2F3nTZVRKSdTSoZ%2BD7xOB03RQtRkXeQ7jRCUfLe6cTWN56FAD%2B%2F23XmS8p1trZ7qZsjRFJKbWFUPXex8Eg0Cc9vYjcHsZBKcXQS3y8wcB6r3al57uugvbslbqRg4ZRFPbRWNrAiblZnMLUEQZf1KG4T1%2FGlQhzGDGcruFji53r7k2pu43LvpMD9RlQcPn656WmHFgj0gMugZYrfHuqNSVTRhIvquioR1H7Yk08o6rAM0wMoWUejB1BfRV5gr43KYp%2FtEp4i9k9S9OwhKXfpDG4Ab0QMEC90gRhpPCxEv8wVmkqyNSJp7WjEoIri1mu%2Bfv5pWc0Ow9A0tE00r2nnPPmwH%2FbU3EIgOMzh5HWNVvUUZ2549rMWewuI7SnMU7kcp74m%2FFxK5zCLcsJOpXo6w8QX3N%2FZjhMetRXjmGsQLZZ2eO7Ffk74GQPCAOnnbsVwyj1HaqgOG6Q%2BuvWBIrNZxC2hqAiU%2FgCaUVwm103RuAWd0g5bTb%2BlycZMDuFM%2F5r6hERwR9MNaqjs4GOqUBGxibyHilazpAAD97AWbpZmHnwu0KVWrZ6DgAbIJrvKRlAq4JiA6Jbbggb3VVjgAT0jRzZTBaoFlGGNuzfFQcoInw2f5VzOISu7vKgUXqsx9Ir1WeGyPJcDspRyVfG6e4bCCzNEa%2FQzTbkY%2FLb4xxNeAvNoHjcDv%2FaY5r2qvV5GkH%2BQk8hqA9qhEV%2B1F%2B1CMIRswblaMTJyI5EkmDkMZ37wB3d2HQ&X-Amz-Signature=cf6258670905825b8845762645ada19349a8759daae540f2c0f040c75b04dc67&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667GKJDLDF%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGl3Ip%2B8xeGGLqmxwjYZ9Hg%2F8cqfaCT9e018PI9PHYy9AiEAmdI2uVr0mPww7P%2FGiPlC1U6XAnWQwLc9RTHWX63OwPkqiAQIqf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDHbWdZjx5atfKJG1SrcA0gYlnDsd96olv1yQif%2BxC094EyUeXOuTtFeatFesSPqebQPVIrZyRBCufg0khcTp1fl8ateBe7rgTcMevUrsRb5c%2F%2BoU1RwgalhQrr5O4OwURewmR%2BcLOvN%2F3nTZVRKSdTSoZ%2BD7xOB03RQtRkXeQ7jRCUfLe6cTWN56FAD%2B%2F23XmS8p1trZ7qZsjRFJKbWFUPXex8Eg0Cc9vYjcHsZBKcXQS3y8wcB6r3al57uugvbslbqRg4ZRFPbRWNrAiblZnMLUEQZf1KG4T1%2FGlQhzGDGcruFji53r7k2pu43LvpMD9RlQcPn656WmHFgj0gMugZYrfHuqNSVTRhIvquioR1H7Yk08o6rAM0wMoWUejB1BfRV5gr43KYp%2FtEp4i9k9S9OwhKXfpDG4Ab0QMEC90gRhpPCxEv8wVmkqyNSJp7WjEoIri1mu%2Bfv5pWc0Ow9A0tE00r2nnPPmwH%2FbU3EIgOMzh5HWNVvUUZ2549rMWewuI7SnMU7kcp74m%2FFxK5zCLcsJOpXo6w8QX3N%2FZjhMetRXjmGsQLZZ2eO7Ffk74GQPCAOnnbsVwyj1HaqgOG6Q%2BuvWBIrNZxC2hqAiU%2FgCaUVwm103RuAWd0g5bTb%2BlycZMDuFM%2F5r6hERwR9MNaqjs4GOqUBGxibyHilazpAAD97AWbpZmHnwu0KVWrZ6DgAbIJrvKRlAq4JiA6Jbbggb3VVjgAT0jRzZTBaoFlGGNuzfFQcoInw2f5VzOISu7vKgUXqsx9Ir1WeGyPJcDspRyVfG6e4bCCzNEa%2FQzTbkY%2FLb4xxNeAvNoHjcDv%2FaY5r2qvV5GkH%2BQk8hqA9qhEV%2B1F%2B1CMIRswblaMTJyI5EkmDkMZ37wB3d2HQ&X-Amz-Signature=583080d25aca017bb44436dcfa92088a0c0a34fa93c6e3864b4c61fb399f5cfc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVYJQYIJ%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDGdpSJeadDf%2BMh8RuWrUdBuJLBIUZgy7Z3eQW7dBC8ewIhALKnf%2BBOuP%2BJhFUazmukoZCJvM%2FzIR9o88No24b9EOlIKogECKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igxtf0VU2WxrxRGYrsgq3AOvoB4kPuetkrg9yarIAzKByn5YrbOJknLZHZCtSkovfAAIqFHOvRvgqKdR440AoOiNkv8nTRhw5%2FPJy%2BRsnf5%2BnOk%2FlgdMrXJdOnird%2Bisj%2FEMz%2B%2BPo8DYVCapmWtDSWHqmOVDZDdA%2FZ3Oe%2BDYb2M%2FyIwhtBLthbpARj%2BVsWHMBsbczm2CFmzC3RWnLMo3QB0Jgk6xYzH7LMQ65SVVHuecOXGRpWaINh9Yu6l58oS9fsK%2F2zDtIHM6geMbUSYdWMKMjz6RV4W6%2BegushY%2FUqRtD4Yr7LyBCV4OhWjEPlFKFy1ZN%2FdHBFsfynh5%2BNGV2FoXdd%2FmIH5iZVMM7Qnb1qrkfp%2B3qP%2Fm%2BLa5E50aPdh201Yjy46SJJkiLsfdruYd7IWQeaSdpXRK2q%2FXRBy7Xa3JL7izvrH1H%2BzdOXFUQL4GnkaF%2BnEdanrJU0yuPpPTExJ1h41YgmB11YlKXcVN2yJvB7dLvd6c4GrqNCXj6tScDF4NLvpKmb0CSiXJNoKmdjZsXI4dPLG6fUmiq6TgMBNyuwqdA64jmIUdkNW6y7%2B%2BYv3GAW%2BvOTaXuPZ1vuPOl41NE6Ou41904iNQKCXj9V5V%2B1X6yvv6RcAgA%2BmqUttsw7OrpTZqExPHgGL4LDDLq47OBjqkAe24kIr5mp7RNc7v3i9SfL%2FdGjfZYOjT%2FfAdjRz6N6fsydspBBKKUTWbwZbmex8eHndNpU8x2%2FwEGgW8yuhTfkhiPgEb3JPaup8HBvvZzSF%2F3kNeEFJiZ%2BddGD5FvTj4%2Foy4nhUVsCnIUNGoMM%2FhLlvZvnN3edeHEuMIF01N5HqbA7zf6ex7LEoHJd3Zrte92lG4F3dj1l0Q5Pmk1NjOqBUo%2Bm6X&X-Amz-Signature=528a7dab573595ab88efafe836a42873d6d6a08ccdec3291169330580a257944&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V6A3NOXA%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIACQoEBje4QlYu3VMUI8WQlyhb5Yi9T1Hx51lJmNK4LSAiEAyLljognq5WqPc5yZ75D6PpFTrntgErkOD5jPNR4ZsQ8qiAQIqf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLv%2FBgC7A4VSbZJdoyrcA1zbEzWVHtUJGmXs0s1%2BJsXUxQynnQmBEw7BBHyfS7LGHcHWvJpHXfpX7MQ%2FR56myCBdQRuZQNFBiiC0Emi2tV5jqn6J5I1GU26yHsk1MB29T35RjzpS6iAQVkpzOFhF5haYDY3UAkSyXlbvYL7iCDUdAALULwJZJq3TejeKffKNFB4ELuVsWDS779j3JXHvlmcIVZtN8eUHe8%2F75e%2FDRiw74Wpdr6hL0rN6Zv1ERzy1L34IgFk0cqdZKG10hvnSvdsSLZl823mw19pVXXxM83Obt6OYqu7zjZ1jXey%2FsASDq3HiMz9xXAskSpGADgR2wLO8emAaTP8gnUqOL77bimcqCao3lThA6905rkUwkKESYJPCrhZf8B2%2FqIA9Bg81dh6IurR%2B5g4mnJrHnJzLPHOvs4oAWY0LiLeHVY6WqA6c8eKba5xgJiJDHkeAq3%2Bm%2FhQ4cwSCiv%2F%2BP1w8EZbISxZFxHgaLCjJ0g%2BehjW4abherXDyHBPeTtzm2PTu16ZMLrwzqgsSYFjZlZRCH0darRaSq12rc5VAonOM%2BUG9GMJdM8%2BI%2FRn%2Fsvm0HRrM2vtgUd749N1KpUdNfTAMJrptYiN%2F5y1cI11%2BgFYvU5NdhEMf40TQooLz%2BmxbdYcdMI%2Brjs4GOqUBN6AAvSfZvlza5L57z1MGnkEPn0IsE1RxoDNj3tWqQedu0DltclgNAIcWHQnKPEGF42ImTxhsb7HE94SxlN1TzhbCYEL1R7q6U6m%2FjL92pZZPSEA%2BfblkkrUoN9zVqhK%2BpXVTtNona0M4hPDKqERA6VYVTBs7pN4zANyIGUXWRODTH3jA941JHgrh7imR5fALtDAq45u0PKKcetGKnPV%2FA5gy%2BS5y&X-Amz-Signature=f0e8ffd70689de08bb522882b8459b8082ced6c0a83c2f7388ea24d984d38d74&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V6A3NOXA%2F20260325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260325T085151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIACQoEBje4QlYu3VMUI8WQlyhb5Yi9T1Hx51lJmNK4LSAiEAyLljognq5WqPc5yZ75D6PpFTrntgErkOD5jPNR4ZsQ8qiAQIqf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLv%2FBgC7A4VSbZJdoyrcA1zbEzWVHtUJGmXs0s1%2BJsXUxQynnQmBEw7BBHyfS7LGHcHWvJpHXfpX7MQ%2FR56myCBdQRuZQNFBiiC0Emi2tV5jqn6J5I1GU26yHsk1MB29T35RjzpS6iAQVkpzOFhF5haYDY3UAkSyXlbvYL7iCDUdAALULwJZJq3TejeKffKNFB4ELuVsWDS779j3JXHvlmcIVZtN8eUHe8%2F75e%2FDRiw74Wpdr6hL0rN6Zv1ERzy1L34IgFk0cqdZKG10hvnSvdsSLZl823mw19pVXXxM83Obt6OYqu7zjZ1jXey%2FsASDq3HiMz9xXAskSpGADgR2wLO8emAaTP8gnUqOL77bimcqCao3lThA6905rkUwkKESYJPCrhZf8B2%2FqIA9Bg81dh6IurR%2B5g4mnJrHnJzLPHOvs4oAWY0LiLeHVY6WqA6c8eKba5xgJiJDHkeAq3%2Bm%2FhQ4cwSCiv%2F%2BP1w8EZbISxZFxHgaLCjJ0g%2BehjW4abherXDyHBPeTtzm2PTu16ZMLrwzqgsSYFjZlZRCH0darRaSq12rc5VAonOM%2BUG9GMJdM8%2BI%2FRn%2Fsvm0HRrM2vtgUd749N1KpUdNfTAMJrptYiN%2F5y1cI11%2BgFYvU5NdhEMf40TQooLz%2BmxbdYcdMI%2Brjs4GOqUBN6AAvSfZvlza5L57z1MGnkEPn0IsE1RxoDNj3tWqQedu0DltclgNAIcWHQnKPEGF42ImTxhsb7HE94SxlN1TzhbCYEL1R7q6U6m%2FjL92pZZPSEA%2BfblkkrUoN9zVqhK%2BpXVTtNona0M4hPDKqERA6VYVTBs7pN4zANyIGUXWRODTH3jA941JHgrh7imR5fALtDAq45u0PKKcetGKnPV%2FA5gy%2BS5y&X-Amz-Signature=8ea4949b21c7fec76067723aa8aba5f5087d89de2d8510c8ca529e570fc658df&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
