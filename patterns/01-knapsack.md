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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YGHI6TWR%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090514Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIEMF6uHVv4R4VJbJzin7fwTvcpGVbHBJ47rplsIwmmRRAiEApAbhs%2FzGFiCf1us2RvcPQQV8JTe3%2Ffikk1EakFxjjJEqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBqrEObeg2p9Ti4HQSrcA5cu07Z5jstxd0qm9ZiRV4cbtFreFBvmSosVy%2BzNLVLB5by5OyL5nrQMm14Ak%2F%2FcMqZ3sQ%2BQJyfloPmwwhoP%2Fwa7httY5VRm2s%2BIuV38uAizNcHP72rCgj7Y8qiLTF%2BdNnoWw4VHyYitQfJvY4nJEmPByLOC9WSz6dwgo0JulzWyr68ESDO7UA1Aafif8aCXWGGli0u%2BKSIL9nz44x4NBbuyWYLDr72aPjd93%2F19D%2BmKZRhGE5ZdkxPA%2F4AUw%2F3bJfFZMuV0xrp2a%2FURi4vOoTE%2B8vKvATad1o0VKg%2B9bUvaP%2FijzweXpMDIA%2Fptyr93tg2ICGBW%2FP97UEUAaegNzXUW5BcVzVjjM%2BcPxu15x5uiuhcXjxsw%2FPHCadsgXuUistsahfP%2FCmdUfTqjzvjofDc4tzD7lEmj52LGcE3W1ESwJEQzouUIYcngKJRFLK49DFnn1cb28WPELBkxpGnJtGdEehCHyr7ATi3Nc3TCIOkpwDiU94v67HEhEKPl0NlUW9X%2BqtFVAh2O7d74ZCo9kBQsi32MAaJt94CX7tcbODe0dCpXeH9okc4eUtT32WylHpjIDdGWQ9jBTC6JDBDvOiVwHzP4krQYDcovLwxDhYTn2vqgtfqqm4VEzfDXMNKd%2B9MGOqUB0%2BkowB8nvh0DPHpUtNDdjXNZULakv3mLjHmQDJplDFnsqEhwJotN6pPLUQ%2F1CUnJZWfyISrPApK8Htx5fWQGoKCbJbJWLJCmDfgaipnSxUKsL%2FzGhJZhY1TKpdJUyKKkN0oFMrjspPnPol8S%2FLVFsedtrGuHBvpXMIMm%2BBA%2Bhp9a7THz09KIv0FBOJiAfab75jylJhN9wbq4UvDZzZUMcGy7m4%2Bn&X-Amz-Signature=e6c29d10f5feecadd15f6ecf642bc6c99e6205b385d80789ddf9fc8ae8aca7f6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YGHI6TWR%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090514Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIEMF6uHVv4R4VJbJzin7fwTvcpGVbHBJ47rplsIwmmRRAiEApAbhs%2FzGFiCf1us2RvcPQQV8JTe3%2Ffikk1EakFxjjJEqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBqrEObeg2p9Ti4HQSrcA5cu07Z5jstxd0qm9ZiRV4cbtFreFBvmSosVy%2BzNLVLB5by5OyL5nrQMm14Ak%2F%2FcMqZ3sQ%2BQJyfloPmwwhoP%2Fwa7httY5VRm2s%2BIuV38uAizNcHP72rCgj7Y8qiLTF%2BdNnoWw4VHyYitQfJvY4nJEmPByLOC9WSz6dwgo0JulzWyr68ESDO7UA1Aafif8aCXWGGli0u%2BKSIL9nz44x4NBbuyWYLDr72aPjd93%2F19D%2BmKZRhGE5ZdkxPA%2F4AUw%2F3bJfFZMuV0xrp2a%2FURi4vOoTE%2B8vKvATad1o0VKg%2B9bUvaP%2FijzweXpMDIA%2Fptyr93tg2ICGBW%2FP97UEUAaegNzXUW5BcVzVjjM%2BcPxu15x5uiuhcXjxsw%2FPHCadsgXuUistsahfP%2FCmdUfTqjzvjofDc4tzD7lEmj52LGcE3W1ESwJEQzouUIYcngKJRFLK49DFnn1cb28WPELBkxpGnJtGdEehCHyr7ATi3Nc3TCIOkpwDiU94v67HEhEKPl0NlUW9X%2BqtFVAh2O7d74ZCo9kBQsi32MAaJt94CX7tcbODe0dCpXeH9okc4eUtT32WylHpjIDdGWQ9jBTC6JDBDvOiVwHzP4krQYDcovLwxDhYTn2vqgtfqqm4VEzfDXMNKd%2B9MGOqUB0%2BkowB8nvh0DPHpUtNDdjXNZULakv3mLjHmQDJplDFnsqEhwJotN6pPLUQ%2F1CUnJZWfyISrPApK8Htx5fWQGoKCbJbJWLJCmDfgaipnSxUKsL%2FzGhJZhY1TKpdJUyKKkN0oFMrjspPnPol8S%2FLVFsedtrGuHBvpXMIMm%2BBA%2Bhp9a7THz09KIv0FBOJiAfab75jylJhN9wbq4UvDZzZUMcGy7m4%2Bn&X-Amz-Signature=c80fa28207a0e38b634d8a91cc8ed545be8cb775075c117cdbdc08363f3d8daf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YGHI6TWR%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090514Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIEMF6uHVv4R4VJbJzin7fwTvcpGVbHBJ47rplsIwmmRRAiEApAbhs%2FzGFiCf1us2RvcPQQV8JTe3%2Ffikk1EakFxjjJEqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBqrEObeg2p9Ti4HQSrcA5cu07Z5jstxd0qm9ZiRV4cbtFreFBvmSosVy%2BzNLVLB5by5OyL5nrQMm14Ak%2F%2FcMqZ3sQ%2BQJyfloPmwwhoP%2Fwa7httY5VRm2s%2BIuV38uAizNcHP72rCgj7Y8qiLTF%2BdNnoWw4VHyYitQfJvY4nJEmPByLOC9WSz6dwgo0JulzWyr68ESDO7UA1Aafif8aCXWGGli0u%2BKSIL9nz44x4NBbuyWYLDr72aPjd93%2F19D%2BmKZRhGE5ZdkxPA%2F4AUw%2F3bJfFZMuV0xrp2a%2FURi4vOoTE%2B8vKvATad1o0VKg%2B9bUvaP%2FijzweXpMDIA%2Fptyr93tg2ICGBW%2FP97UEUAaegNzXUW5BcVzVjjM%2BcPxu15x5uiuhcXjxsw%2FPHCadsgXuUistsahfP%2FCmdUfTqjzvjofDc4tzD7lEmj52LGcE3W1ESwJEQzouUIYcngKJRFLK49DFnn1cb28WPELBkxpGnJtGdEehCHyr7ATi3Nc3TCIOkpwDiU94v67HEhEKPl0NlUW9X%2BqtFVAh2O7d74ZCo9kBQsi32MAaJt94CX7tcbODe0dCpXeH9okc4eUtT32WylHpjIDdGWQ9jBTC6JDBDvOiVwHzP4krQYDcovLwxDhYTn2vqgtfqqm4VEzfDXMNKd%2B9MGOqUB0%2BkowB8nvh0DPHpUtNDdjXNZULakv3mLjHmQDJplDFnsqEhwJotN6pPLUQ%2F1CUnJZWfyISrPApK8Htx5fWQGoKCbJbJWLJCmDfgaipnSxUKsL%2FzGhJZhY1TKpdJUyKKkN0oFMrjspPnPol8S%2FLVFsedtrGuHBvpXMIMm%2BBA%2Bhp9a7THz09KIv0FBOJiAfab75jylJhN9wbq4UvDZzZUMcGy7m4%2Bn&X-Amz-Signature=05999fe24caa1bfd161f33fd6b23f7ea186e217b40475195dbcab28a5f263383&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666NPQPJFJ%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090514Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIQDgff1Uw6mNI4mX6eBSawl%2B4wmydl0CVJLPtHRV8yKYNgIgRDGA%2ByUoUcQT0uXPemFoGE3TVKMgZ84vS5y5sPT63tYqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEjfUfe2cGNL%2BlvU8yrcA42K3DJF3wdmLwRe%2BPvAhFpaHb6%2Bxj5qRTMtDB1I3ZtNyYgqndV%2F%2BG%2BWXeZqWIxIPuzfxqSEqbP4YKHyBCsmc%2Fc8bVFmQByvbWEEHMIRNONBRpqLAv1iyrdUQH5XFEmqH0GZLbMOa6gx7ucHLRg3tt%2Fgwp9DE5cZ3rphekDJQcdFzgKPa8Olamv2GcGJDd0WAfM9ID21xzsF%2BbAJASb9BZNIowoy2UwErph1EQ1xKXQSF82YwCJRXG2pyaBQNgt9GWHSjPd6xGxqDowz6O17f%2Fc%2FTp6pd3%2FbRpj0dvFRTCZdsMBAZ4OiinLrnPlDhnEUxbQc36MquqS7%2BnYasZhmAGe4%2FFiuaLFu9zMvppRe30a%2FuaDS7efF0MhDr5Hruy9KOkrWsOnK4oNy9OYcbvsuFCi0TbtJ5483nhoVNgGJVOQcI4pAbW2RrNhW1gCwPM%2FrB1R5NlLu%2FZufi9KfA8QYpude5khr2nm4F0gTbnc6B36ZCLNBKOGitZpoWyTj7Nmc%2FLWs1S8RgfIVcgF382SUkfCfZLzVbm6CRK4u2OXxdEJLX4d7tPdGr1f3r3bBNrp3rQapNldA%2FWLziU%2FPBXfu8%2BNvhkR%2F3L%2FHQMKiLTO7uTQEAQ3Vf5hDvnV2kCCfMNCb%2B9MGOqUBLV3D1R5uU5lLuB1ucfsxuuj%2FP8h%2FTriKcgxLLJqeEvtMhOtr2qBjjlXr4ZsySkvPxULxoCZbdt0mZCm8RRK4pSFB%2Bt%2FQ4df3K02uXTixGlwl8KO4S1YEN33ulawOkdXm1t0dLZsVxql7n%2BjMZK%2BuQzRXnBMxTkXWCwhlc6tU9aCut%2Fp9FzdIu6q3FpOk%2FLSeJDUIHSDwXGx%2Fj%2BGFeqtHd0QhS06q&X-Amz-Signature=19824bc43d39a6cbd123955f47ba0f6f876b7fd873fae8a4544cac469f0d70db&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666NPQPJFJ%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090514Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIQDgff1Uw6mNI4mX6eBSawl%2B4wmydl0CVJLPtHRV8yKYNgIgRDGA%2ByUoUcQT0uXPemFoGE3TVKMgZ84vS5y5sPT63tYqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEjfUfe2cGNL%2BlvU8yrcA42K3DJF3wdmLwRe%2BPvAhFpaHb6%2Bxj5qRTMtDB1I3ZtNyYgqndV%2F%2BG%2BWXeZqWIxIPuzfxqSEqbP4YKHyBCsmc%2Fc8bVFmQByvbWEEHMIRNONBRpqLAv1iyrdUQH5XFEmqH0GZLbMOa6gx7ucHLRg3tt%2Fgwp9DE5cZ3rphekDJQcdFzgKPa8Olamv2GcGJDd0WAfM9ID21xzsF%2BbAJASb9BZNIowoy2UwErph1EQ1xKXQSF82YwCJRXG2pyaBQNgt9GWHSjPd6xGxqDowz6O17f%2Fc%2FTp6pd3%2FbRpj0dvFRTCZdsMBAZ4OiinLrnPlDhnEUxbQc36MquqS7%2BnYasZhmAGe4%2FFiuaLFu9zMvppRe30a%2FuaDS7efF0MhDr5Hruy9KOkrWsOnK4oNy9OYcbvsuFCi0TbtJ5483nhoVNgGJVOQcI4pAbW2RrNhW1gCwPM%2FrB1R5NlLu%2FZufi9KfA8QYpude5khr2nm4F0gTbnc6B36ZCLNBKOGitZpoWyTj7Nmc%2FLWs1S8RgfIVcgF382SUkfCfZLzVbm6CRK4u2OXxdEJLX4d7tPdGr1f3r3bBNrp3rQapNldA%2FWLziU%2FPBXfu8%2BNvhkR%2F3L%2FHQMKiLTO7uTQEAQ3Vf5hDvnV2kCCfMNCb%2B9MGOqUBLV3D1R5uU5lLuB1ucfsxuuj%2FP8h%2FTriKcgxLLJqeEvtMhOtr2qBjjlXr4ZsySkvPxULxoCZbdt0mZCm8RRK4pSFB%2Bt%2FQ4df3K02uXTixGlwl8KO4S1YEN33ulawOkdXm1t0dLZsVxql7n%2BjMZK%2BuQzRXnBMxTkXWCwhlc6tU9aCut%2Fp9FzdIu6q3FpOk%2FLSeJDUIHSDwXGx%2Fj%2BGFeqtHd0QhS06q&X-Amz-Signature=c9378b149a4adcd03c734ef4eddd5eb7458a1a118604cccc52c37ef11da1b8c3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666NPQPJFJ%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090514Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIQDgff1Uw6mNI4mX6eBSawl%2B4wmydl0CVJLPtHRV8yKYNgIgRDGA%2ByUoUcQT0uXPemFoGE3TVKMgZ84vS5y5sPT63tYqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEjfUfe2cGNL%2BlvU8yrcA42K3DJF3wdmLwRe%2BPvAhFpaHb6%2Bxj5qRTMtDB1I3ZtNyYgqndV%2F%2BG%2BWXeZqWIxIPuzfxqSEqbP4YKHyBCsmc%2Fc8bVFmQByvbWEEHMIRNONBRpqLAv1iyrdUQH5XFEmqH0GZLbMOa6gx7ucHLRg3tt%2Fgwp9DE5cZ3rphekDJQcdFzgKPa8Olamv2GcGJDd0WAfM9ID21xzsF%2BbAJASb9BZNIowoy2UwErph1EQ1xKXQSF82YwCJRXG2pyaBQNgt9GWHSjPd6xGxqDowz6O17f%2Fc%2FTp6pd3%2FbRpj0dvFRTCZdsMBAZ4OiinLrnPlDhnEUxbQc36MquqS7%2BnYasZhmAGe4%2FFiuaLFu9zMvppRe30a%2FuaDS7efF0MhDr5Hruy9KOkrWsOnK4oNy9OYcbvsuFCi0TbtJ5483nhoVNgGJVOQcI4pAbW2RrNhW1gCwPM%2FrB1R5NlLu%2FZufi9KfA8QYpude5khr2nm4F0gTbnc6B36ZCLNBKOGitZpoWyTj7Nmc%2FLWs1S8RgfIVcgF382SUkfCfZLzVbm6CRK4u2OXxdEJLX4d7tPdGr1f3r3bBNrp3rQapNldA%2FWLziU%2FPBXfu8%2BNvhkR%2F3L%2FHQMKiLTO7uTQEAQ3Vf5hDvnV2kCCfMNCb%2B9MGOqUBLV3D1R5uU5lLuB1ucfsxuuj%2FP8h%2FTriKcgxLLJqeEvtMhOtr2qBjjlXr4ZsySkvPxULxoCZbdt0mZCm8RRK4pSFB%2Bt%2FQ4df3K02uXTixGlwl8KO4S1YEN33ulawOkdXm1t0dLZsVxql7n%2BjMZK%2BuQzRXnBMxTkXWCwhlc6tU9aCut%2Fp9FzdIu6q3FpOk%2FLSeJDUIHSDwXGx%2Fj%2BGFeqtHd0QhS06q&X-Amz-Signature=82eb0e43e95bfc7687a4761c601e5902e6b44d90688f4a86c49f524fcbe83ae8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666NPQPJFJ%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090514Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIQDgff1Uw6mNI4mX6eBSawl%2B4wmydl0CVJLPtHRV8yKYNgIgRDGA%2ByUoUcQT0uXPemFoGE3TVKMgZ84vS5y5sPT63tYqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEjfUfe2cGNL%2BlvU8yrcA42K3DJF3wdmLwRe%2BPvAhFpaHb6%2Bxj5qRTMtDB1I3ZtNyYgqndV%2F%2BG%2BWXeZqWIxIPuzfxqSEqbP4YKHyBCsmc%2Fc8bVFmQByvbWEEHMIRNONBRpqLAv1iyrdUQH5XFEmqH0GZLbMOa6gx7ucHLRg3tt%2Fgwp9DE5cZ3rphekDJQcdFzgKPa8Olamv2GcGJDd0WAfM9ID21xzsF%2BbAJASb9BZNIowoy2UwErph1EQ1xKXQSF82YwCJRXG2pyaBQNgt9GWHSjPd6xGxqDowz6O17f%2Fc%2FTp6pd3%2FbRpj0dvFRTCZdsMBAZ4OiinLrnPlDhnEUxbQc36MquqS7%2BnYasZhmAGe4%2FFiuaLFu9zMvppRe30a%2FuaDS7efF0MhDr5Hruy9KOkrWsOnK4oNy9OYcbvsuFCi0TbtJ5483nhoVNgGJVOQcI4pAbW2RrNhW1gCwPM%2FrB1R5NlLu%2FZufi9KfA8QYpude5khr2nm4F0gTbnc6B36ZCLNBKOGitZpoWyTj7Nmc%2FLWs1S8RgfIVcgF382SUkfCfZLzVbm6CRK4u2OXxdEJLX4d7tPdGr1f3r3bBNrp3rQapNldA%2FWLziU%2FPBXfu8%2BNvhkR%2F3L%2FHQMKiLTO7uTQEAQ3Vf5hDvnV2kCCfMNCb%2B9MGOqUBLV3D1R5uU5lLuB1ucfsxuuj%2FP8h%2FTriKcgxLLJqeEvtMhOtr2qBjjlXr4ZsySkvPxULxoCZbdt0mZCm8RRK4pSFB%2Bt%2FQ4df3K02uXTixGlwl8KO4S1YEN33ulawOkdXm1t0dLZsVxql7n%2BjMZK%2BuQzRXnBMxTkXWCwhlc6tU9aCut%2Fp9FzdIu6q3FpOk%2FLSeJDUIHSDwXGx%2Fj%2BGFeqtHd0QhS06q&X-Amz-Signature=1b5e56f69d7161982abaec7cad2f37852f48907f5ad2571def6e6393ae97cd35&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VK22B3YZ%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090515Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJIMEYCIQCNPilPPub50VeQNE8hlFJrJ2C76n4Pc6%2Fwy%2BHtmLhPAwIhAP9pFtIeWcUd8NeRRja%2FxYqSBkoap5%2FVBEhjv5Wb%2Bf9oKogECPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz2FJwagdANskZMFHAq3AOclMIKAQ3xDfjKlkdBByAam6e3nag2WNj7B0hgSyWkStXV96nUQ7L5tiaGRl7utnbqhTo6hnt3V0JSJYJCdYeX6oTK1A2Ga4q5l3dTGoLWBz2fjaD%2BXrYsirUi7JXV0LoMOhwcVg1tQ1S3MXaGlAz5uQKc6TH%2BkocV3gvJTBNbHC0%2FvaH5FvVVi0IUFBnDFdY%2BP8TN6ZgYTaCUqwwAv3Y3XcadX8wTzPVbOMI7VB3CYK8r92tXoM%2F%2FUUTo4bjBdgS%2F1r7urg1rwJ0TO5m6tttEoYq%2BcAiHpDOHCGkS869PB8TSonI6MH1WhbuYyZRGas1NRD129hGxcmAw0Vj9jOFI1dCWdSY0Ix9mKqUYlvExzRb6i5QfLmNa%2B6sFFrGpB2PzYJYvoyUiFUHzxTzHwGypF8PG7x8WAWaN6lktrhuVhsR91tikvBQTgZilYgUlYZwEE1zZsxm90QtPV2SrKKP5mwgKnhJ1o1Tc7Ugdyuvw9uGuiMo6P91nS7fKzwSggBez3kzRWkQCkeS31g15q12FLVPOioQ80D5FogQ58nlPMvHGs9yMn2B4ZAn7U1nnBmzParAdHltZQepq%2F9WQSC%2B0nHuaiaxmF9KnflAsETIz8lGwpEBsW8QaJEqT1jDqnvvTBjqkAfkGrpehHZzOYBxW03Jyl4zyZWjMe8n0kRtqBb4yED0LWw72LZTl8dyNAUZeEKx1yGXPiFP%2BuKxxounXBKpM37e1lc5f4qlBcAyF%2Fsxjx4Myja0X53Ogu1HGATJHKkN5FvGqRo5c%2Bw%2BrAJgkdJjtB8BiEph0vcfeQqYQP6jspiJcJ%2F2EF9NZqL0rUUGchtwYcavEKXgdSsosBZfcgVGm3lamjAo4&X-Amz-Signature=8813d0322bd74d730c990e4988993111052dfed9dbef2de6227479ed3daf100b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QILROWMH%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090515Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJIMEYCIQDFRBVMJMV5bYRQ39ynSDbTvzkEUu%2FiH%2Bw3nCK1yQmheQIhAMlfCPoVaB%2BkoY86J%2BoRvJ0M2XTZ7xg0zbPhuqSrTSGxKogECPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw%2BpcU7Fjw99X3v2YAq3ANJB4mjufYZoklYqjvW9IfylGmY6PyXmu4X%2FcE6mrxHaAX4u4stS6xxu2o3cu4aGQLTGiDgPm3fQj%2FBgXiwZT3OCvSrhXBf2BCWPWNzOl1k8R%2F5G3MrUzFZT8fo%2FluW1WC6ZZtSlmptFeoeVKKRA0eMyehhhKFtBIagQvmiBQMbf7LTYk%2BK2LCWxgvS43d3QDNYQF1WDEB7F9dkm31XoC%2F%2FgkqLURoq2U6Njr%2BrjTwymINL9YmMwJeIqXhSFOclmA4woOPCQO7UW45pHxyLTWWdjPqDYvchc1yzadcSpahlaUqzmTCLAFDsRiWZeiXilXINqI0wcG7yMHcjBwhRBOT76bxbgNwBYibIFSVzmRh4uZW0%2FZRt1y1w0qCQRu6wphz3Wxk9OBftlhijfdZ057zk6F%2FKHcaaLSyfHbmoyGBgpP91oDj5Y9FVCz7uWy1kS6BSVywhO2Zs8agjIAj5N0JYulL4kT7ANezj%2Ba3BtHGfRO3bzGQzHv1ny21G5iG3U2uD6sWuq9alt3d6rMNxlPuJhhfDHtPUNArSByVcTk%2FjxjEn4C8GzDyTrh%2F2MbSHiNLFRJFLnNjuyCub3Yry6FNroUuQRuM9EVVhdo%2BSZ7FS%2BDZ%2FQqUui5sTkZ9aajCAnPvTBjqkATKEnJtUhRafVVGfB8i3eGD7uwY6OpmR2eQL0MV6qzwzkISOg%2BEJzFRsItGFt5E1obfBv%2FWvbrw8twuFYJTdJNfu9IY6d9Q4nHZAptSZLquFNN7691HTWhMto3QwfuvrcUM6Tp0gs5Af%2BbWEVhMDPLftdFh6bBSgphUTvn1AMMH1FiZR1zgb7sGBWqvhvasxcviKn71wihsajLkAElYFlvCdg0ym&X-Amz-Signature=97bb65f0b1b40d3ff1dcddbe7d0c532337198502fe942b0c90e337e4e4284c60&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QILROWMH%2F20260814%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260814T090515Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJIMEYCIQDFRBVMJMV5bYRQ39ynSDbTvzkEUu%2FiH%2Bw3nCK1yQmheQIhAMlfCPoVaB%2BkoY86J%2BoRvJ0M2XTZ7xg0zbPhuqSrTSGxKogECPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw%2BpcU7Fjw99X3v2YAq3ANJB4mjufYZoklYqjvW9IfylGmY6PyXmu4X%2FcE6mrxHaAX4u4stS6xxu2o3cu4aGQLTGiDgPm3fQj%2FBgXiwZT3OCvSrhXBf2BCWPWNzOl1k8R%2F5G3MrUzFZT8fo%2FluW1WC6ZZtSlmptFeoeVKKRA0eMyehhhKFtBIagQvmiBQMbf7LTYk%2BK2LCWxgvS43d3QDNYQF1WDEB7F9dkm31XoC%2F%2FgkqLURoq2U6Njr%2BrjTwymINL9YmMwJeIqXhSFOclmA4woOPCQO7UW45pHxyLTWWdjPqDYvchc1yzadcSpahlaUqzmTCLAFDsRiWZeiXilXINqI0wcG7yMHcjBwhRBOT76bxbgNwBYibIFSVzmRh4uZW0%2FZRt1y1w0qCQRu6wphz3Wxk9OBftlhijfdZ057zk6F%2FKHcaaLSyfHbmoyGBgpP91oDj5Y9FVCz7uWy1kS6BSVywhO2Zs8agjIAj5N0JYulL4kT7ANezj%2Ba3BtHGfRO3bzGQzHv1ny21G5iG3U2uD6sWuq9alt3d6rMNxlPuJhhfDHtPUNArSByVcTk%2FjxjEn4C8GzDyTrh%2F2MbSHiNLFRJFLnNjuyCub3Yry6FNroUuQRuM9EVVhdo%2BSZ7FS%2BDZ%2FQqUui5sTkZ9aajCAnPvTBjqkATKEnJtUhRafVVGfB8i3eGD7uwY6OpmR2eQL0MV6qzwzkISOg%2BEJzFRsItGFt5E1obfBv%2FWvbrw8twuFYJTdJNfu9IY6d9Q4nHZAptSZLquFNN7691HTWhMto3QwfuvrcUM6Tp0gs5Af%2BbWEVhMDPLftdFh6bBSgphUTvn1AMMH1FiZR1zgb7sGBWqvhvasxcviKn71wihsajLkAElYFlvCdg0ym&X-Amz-Signature=1a9ad378d8a5d1aaac2c1caf340e68377ecd4d27554199b0524d427995477da1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
