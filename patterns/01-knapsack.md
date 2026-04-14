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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WVLYHYXI%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCNTd2Q6La7MWxv%2F14qBffubn4kKS8qzLAcjpGTnC7WVgIgdsQtGZu3%2F%2FVzJib2HPxCR7n%2F23%2FTEgcfDDvzLvbxTA4qiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGZdl0GyrLb0Q%2FKceircA46L%2FQc07cntrmO%2F3TfCx%2B16b6iixh9mC%2BHKS8gvNDYt1BJcHAPjVnedYKjNHuw0TVk8qYDE2h%2FZE721KEkryH0c73OEJRZNd6DcsF5snlCqBXJWybonmfIu7bZWJpgqB%2B06x1pYRBVyk342QHROa%2BNT%2FC2uz0Cqbad1hUg%2FppbCTLh5FawpWN4bohWoU%2FXNK95efXIJ2sQGRb0l5pJz1ZGCHgRw6oK3%2F40v2DI2dIouD15ivBKBU%2B8OxJAH7slfY6xo%2FelKB0NnWKT9FDhTzzmMp2s%2FOQBWU8upfiVUuG5lzbSTbc%2F%2Bii8igbip9e1W0oYOe3F015csw8oubLVyAq%2BxTIVdbrRnuobnf9PS7VNVZKYgY%2BP%2B3O7SENxLL%2FVr8TBpbxzjkcAwVEsCLQLyvuqQBogNxGpKEw%2BuzjclJwl4sDa8H8YY3ZvmSj%2BeXSxNxaCAlMOlBI5y%2BodrIrxraqZaQYKYVuc73DPRf4hjob2UUwsjM1uJ5pLZe2JRPlLP6eGyn1VvbVgcAdxGAoNhli30WcmscIs%2Bs4HFH7xOki1b7PXL46GBqKqD%2BcPvw8Q60kKdL65tShAlL2g2u5NaSIQBxXugrcz7yvHa5bIkoSaFEvKxB2mN7FkhMsOUMN7%2F984GOqUBTMSPtsVffPlWadArv0giA48dFvDY44ofErt%2B83Q2wkzik2cV9gimb4413e5qDG5HycFbz2F4p64JggMRfP3KmJyhewsYNHBGjfU8PMidDL7SYlsg%2BsFf%2FGsgXMAizZq35YDq6R1brgUnwL%2FN7wWc65DX8LxpgOrKWFIywJjpAndqga4aQ6JhNOYCmiT92sT6SLnyPXOff85t4Dbrq7B35cwVAu5N&X-Amz-Signature=c91d74efb0c0c8cbdc518df2e74145760d46729c3d0408e1d6a5fe18ca6949eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WVLYHYXI%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCNTd2Q6La7MWxv%2F14qBffubn4kKS8qzLAcjpGTnC7WVgIgdsQtGZu3%2F%2FVzJib2HPxCR7n%2F23%2FTEgcfDDvzLvbxTA4qiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGZdl0GyrLb0Q%2FKceircA46L%2FQc07cntrmO%2F3TfCx%2B16b6iixh9mC%2BHKS8gvNDYt1BJcHAPjVnedYKjNHuw0TVk8qYDE2h%2FZE721KEkryH0c73OEJRZNd6DcsF5snlCqBXJWybonmfIu7bZWJpgqB%2B06x1pYRBVyk342QHROa%2BNT%2FC2uz0Cqbad1hUg%2FppbCTLh5FawpWN4bohWoU%2FXNK95efXIJ2sQGRb0l5pJz1ZGCHgRw6oK3%2F40v2DI2dIouD15ivBKBU%2B8OxJAH7slfY6xo%2FelKB0NnWKT9FDhTzzmMp2s%2FOQBWU8upfiVUuG5lzbSTbc%2F%2Bii8igbip9e1W0oYOe3F015csw8oubLVyAq%2BxTIVdbrRnuobnf9PS7VNVZKYgY%2BP%2B3O7SENxLL%2FVr8TBpbxzjkcAwVEsCLQLyvuqQBogNxGpKEw%2BuzjclJwl4sDa8H8YY3ZvmSj%2BeXSxNxaCAlMOlBI5y%2BodrIrxraqZaQYKYVuc73DPRf4hjob2UUwsjM1uJ5pLZe2JRPlLP6eGyn1VvbVgcAdxGAoNhli30WcmscIs%2Bs4HFH7xOki1b7PXL46GBqKqD%2BcPvw8Q60kKdL65tShAlL2g2u5NaSIQBxXugrcz7yvHa5bIkoSaFEvKxB2mN7FkhMsOUMN7%2F984GOqUBTMSPtsVffPlWadArv0giA48dFvDY44ofErt%2B83Q2wkzik2cV9gimb4413e5qDG5HycFbz2F4p64JggMRfP3KmJyhewsYNHBGjfU8PMidDL7SYlsg%2BsFf%2FGsgXMAizZq35YDq6R1brgUnwL%2FN7wWc65DX8LxpgOrKWFIywJjpAndqga4aQ6JhNOYCmiT92sT6SLnyPXOff85t4Dbrq7B35cwVAu5N&X-Amz-Signature=2bbcaa86bf9cb49feee6ebb2407f4be9da2c240f1b28ac9a9fe17f400a52a27a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WVLYHYXI%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCNTd2Q6La7MWxv%2F14qBffubn4kKS8qzLAcjpGTnC7WVgIgdsQtGZu3%2F%2FVzJib2HPxCR7n%2F23%2FTEgcfDDvzLvbxTA4qiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGZdl0GyrLb0Q%2FKceircA46L%2FQc07cntrmO%2F3TfCx%2B16b6iixh9mC%2BHKS8gvNDYt1BJcHAPjVnedYKjNHuw0TVk8qYDE2h%2FZE721KEkryH0c73OEJRZNd6DcsF5snlCqBXJWybonmfIu7bZWJpgqB%2B06x1pYRBVyk342QHROa%2BNT%2FC2uz0Cqbad1hUg%2FppbCTLh5FawpWN4bohWoU%2FXNK95efXIJ2sQGRb0l5pJz1ZGCHgRw6oK3%2F40v2DI2dIouD15ivBKBU%2B8OxJAH7slfY6xo%2FelKB0NnWKT9FDhTzzmMp2s%2FOQBWU8upfiVUuG5lzbSTbc%2F%2Bii8igbip9e1W0oYOe3F015csw8oubLVyAq%2BxTIVdbrRnuobnf9PS7VNVZKYgY%2BP%2B3O7SENxLL%2FVr8TBpbxzjkcAwVEsCLQLyvuqQBogNxGpKEw%2BuzjclJwl4sDa8H8YY3ZvmSj%2BeXSxNxaCAlMOlBI5y%2BodrIrxraqZaQYKYVuc73DPRf4hjob2UUwsjM1uJ5pLZe2JRPlLP6eGyn1VvbVgcAdxGAoNhli30WcmscIs%2Bs4HFH7xOki1b7PXL46GBqKqD%2BcPvw8Q60kKdL65tShAlL2g2u5NaSIQBxXugrcz7yvHa5bIkoSaFEvKxB2mN7FkhMsOUMN7%2F984GOqUBTMSPtsVffPlWadArv0giA48dFvDY44ofErt%2B83Q2wkzik2cV9gimb4413e5qDG5HycFbz2F4p64JggMRfP3KmJyhewsYNHBGjfU8PMidDL7SYlsg%2BsFf%2FGsgXMAizZq35YDq6R1brgUnwL%2FN7wWc65DX8LxpgOrKWFIywJjpAndqga4aQ6JhNOYCmiT92sT6SLnyPXOff85t4Dbrq7B35cwVAu5N&X-Amz-Signature=d0c882bd7762296eece32dad8aeb82688e4441677f69417a549ff4aff0adfae2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RCOIA3CG%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD5zYUNLXxbGNe07JwyfTvP38imN3Pmu68%2Fq7nTfadPggIgSVTBNyCiELeE%2B8ovVhMRo2HuKvzwj1SyLUb0YTwWU0gqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCO3Qx64AmkNoPp%2BpyrcA9FJjBzz0vmQXnLCjGz6hyXYiTwVrbrXw1n%2FyjB1cKRc2yHl7CTPm25mVLHFweuk1YnF7cvFENOe3L4HR9vMCCBOc3p8fnZfjoiQxsew5zBBfv%2BNiom31c2Qr4Fc2ltZ0PeY9CDf2L0LR0ut9lc4xpAjXSbpkXQ%2FZOPQ565dXi8tPnvLQ4wNRkkn5W0q4R3Mcr9AY9%2Bl4xk%2FAPZBl2r%2B4sJlfF%2FpUYqW5mkdwLBKuiZMqbC1zPf9vwIsL8yim%2B36zNawWz2P5DkawMYKiNwtr1N5feXUhPenFifd7AsMssyoCgk5kvf%2Fp2UPfb59BZsP7QsXV9jiL7aZIeeW6w3JbfcrkPoC2LL0CpBXUT5v1oZPLVLCxYcq5dimvkrVBWTd%2FF%2BQQWdPrBJ6JOU8sYsXryhemHdZC9y%2BEhPUWcT2JymM8Fckne58CkcmOgd%2FptuvpkyZd60JRR6OxOIDYQwVlVoaUKykyZqJFy%2BWzrBCwb9XTJfhNLYMZrYOeDe0TekejBrussnPpAl47WGdXHajN44sE6OQ2qkv6D9flZHfGfAJN%2Fu7i9%2BfrVFtr09HREXfKut%2FTN%2FjhEANkhadgp3GF8gGQiRz01zUlnUfiPnMds5LtwKe7uYebAQO%2FONyMLGA%2BM4GOqUBRzFMLJnrcwMswRD2RdsAetwa1gtjOKuI4ojmF4QXRNjcUPsS8lGUZJ5GgnIeGhnmH8qtNRb8rRu5T96MwRzTREvAi8bSUogFZWV2NYkom8%2F0QZifhkghuGiAo3PSijxca2pALEqHvChQNQjBtuEA5LwYte6MXulo%2BZQnwFEkkqF09ZvXFD1ZRGfzs2bIqVWTNRC2V3pxf6Ic1L%2Bb5xh7n%2FowIUiT&X-Amz-Signature=3012786c16d9ed030040bab0d968db08b6ab2b0d257c763ca1c2a97882014de3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RCOIA3CG%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD5zYUNLXxbGNe07JwyfTvP38imN3Pmu68%2Fq7nTfadPggIgSVTBNyCiELeE%2B8ovVhMRo2HuKvzwj1SyLUb0YTwWU0gqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCO3Qx64AmkNoPp%2BpyrcA9FJjBzz0vmQXnLCjGz6hyXYiTwVrbrXw1n%2FyjB1cKRc2yHl7CTPm25mVLHFweuk1YnF7cvFENOe3L4HR9vMCCBOc3p8fnZfjoiQxsew5zBBfv%2BNiom31c2Qr4Fc2ltZ0PeY9CDf2L0LR0ut9lc4xpAjXSbpkXQ%2FZOPQ565dXi8tPnvLQ4wNRkkn5W0q4R3Mcr9AY9%2Bl4xk%2FAPZBl2r%2B4sJlfF%2FpUYqW5mkdwLBKuiZMqbC1zPf9vwIsL8yim%2B36zNawWz2P5DkawMYKiNwtr1N5feXUhPenFifd7AsMssyoCgk5kvf%2Fp2UPfb59BZsP7QsXV9jiL7aZIeeW6w3JbfcrkPoC2LL0CpBXUT5v1oZPLVLCxYcq5dimvkrVBWTd%2FF%2BQQWdPrBJ6JOU8sYsXryhemHdZC9y%2BEhPUWcT2JymM8Fckne58CkcmOgd%2FptuvpkyZd60JRR6OxOIDYQwVlVoaUKykyZqJFy%2BWzrBCwb9XTJfhNLYMZrYOeDe0TekejBrussnPpAl47WGdXHajN44sE6OQ2qkv6D9flZHfGfAJN%2Fu7i9%2BfrVFtr09HREXfKut%2FTN%2FjhEANkhadgp3GF8gGQiRz01zUlnUfiPnMds5LtwKe7uYebAQO%2FONyMLGA%2BM4GOqUBRzFMLJnrcwMswRD2RdsAetwa1gtjOKuI4ojmF4QXRNjcUPsS8lGUZJ5GgnIeGhnmH8qtNRb8rRu5T96MwRzTREvAi8bSUogFZWV2NYkom8%2F0QZifhkghuGiAo3PSijxca2pALEqHvChQNQjBtuEA5LwYte6MXulo%2BZQnwFEkkqF09ZvXFD1ZRGfzs2bIqVWTNRC2V3pxf6Ic1L%2Bb5xh7n%2FowIUiT&X-Amz-Signature=801b7ef52ae5d864d27011ba29753617951c79ac324ded30e2cae3830e102ed0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RCOIA3CG%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD5zYUNLXxbGNe07JwyfTvP38imN3Pmu68%2Fq7nTfadPggIgSVTBNyCiELeE%2B8ovVhMRo2HuKvzwj1SyLUb0YTwWU0gqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCO3Qx64AmkNoPp%2BpyrcA9FJjBzz0vmQXnLCjGz6hyXYiTwVrbrXw1n%2FyjB1cKRc2yHl7CTPm25mVLHFweuk1YnF7cvFENOe3L4HR9vMCCBOc3p8fnZfjoiQxsew5zBBfv%2BNiom31c2Qr4Fc2ltZ0PeY9CDf2L0LR0ut9lc4xpAjXSbpkXQ%2FZOPQ565dXi8tPnvLQ4wNRkkn5W0q4R3Mcr9AY9%2Bl4xk%2FAPZBl2r%2B4sJlfF%2FpUYqW5mkdwLBKuiZMqbC1zPf9vwIsL8yim%2B36zNawWz2P5DkawMYKiNwtr1N5feXUhPenFifd7AsMssyoCgk5kvf%2Fp2UPfb59BZsP7QsXV9jiL7aZIeeW6w3JbfcrkPoC2LL0CpBXUT5v1oZPLVLCxYcq5dimvkrVBWTd%2FF%2BQQWdPrBJ6JOU8sYsXryhemHdZC9y%2BEhPUWcT2JymM8Fckne58CkcmOgd%2FptuvpkyZd60JRR6OxOIDYQwVlVoaUKykyZqJFy%2BWzrBCwb9XTJfhNLYMZrYOeDe0TekejBrussnPpAl47WGdXHajN44sE6OQ2qkv6D9flZHfGfAJN%2Fu7i9%2BfrVFtr09HREXfKut%2FTN%2FjhEANkhadgp3GF8gGQiRz01zUlnUfiPnMds5LtwKe7uYebAQO%2FONyMLGA%2BM4GOqUBRzFMLJnrcwMswRD2RdsAetwa1gtjOKuI4ojmF4QXRNjcUPsS8lGUZJ5GgnIeGhnmH8qtNRb8rRu5T96MwRzTREvAi8bSUogFZWV2NYkom8%2F0QZifhkghuGiAo3PSijxca2pALEqHvChQNQjBtuEA5LwYte6MXulo%2BZQnwFEkkqF09ZvXFD1ZRGfzs2bIqVWTNRC2V3pxf6Ic1L%2Bb5xh7n%2FowIUiT&X-Amz-Signature=fb895756952a991bab633be79f3820d40c470e71a2975d16cef195b36ec3a1f4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RCOIA3CG%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD5zYUNLXxbGNe07JwyfTvP38imN3Pmu68%2Fq7nTfadPggIgSVTBNyCiELeE%2B8ovVhMRo2HuKvzwj1SyLUb0YTwWU0gqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCO3Qx64AmkNoPp%2BpyrcA9FJjBzz0vmQXnLCjGz6hyXYiTwVrbrXw1n%2FyjB1cKRc2yHl7CTPm25mVLHFweuk1YnF7cvFENOe3L4HR9vMCCBOc3p8fnZfjoiQxsew5zBBfv%2BNiom31c2Qr4Fc2ltZ0PeY9CDf2L0LR0ut9lc4xpAjXSbpkXQ%2FZOPQ565dXi8tPnvLQ4wNRkkn5W0q4R3Mcr9AY9%2Bl4xk%2FAPZBl2r%2B4sJlfF%2FpUYqW5mkdwLBKuiZMqbC1zPf9vwIsL8yim%2B36zNawWz2P5DkawMYKiNwtr1N5feXUhPenFifd7AsMssyoCgk5kvf%2Fp2UPfb59BZsP7QsXV9jiL7aZIeeW6w3JbfcrkPoC2LL0CpBXUT5v1oZPLVLCxYcq5dimvkrVBWTd%2FF%2BQQWdPrBJ6JOU8sYsXryhemHdZC9y%2BEhPUWcT2JymM8Fckne58CkcmOgd%2FptuvpkyZd60JRR6OxOIDYQwVlVoaUKykyZqJFy%2BWzrBCwb9XTJfhNLYMZrYOeDe0TekejBrussnPpAl47WGdXHajN44sE6OQ2qkv6D9flZHfGfAJN%2Fu7i9%2BfrVFtr09HREXfKut%2FTN%2FjhEANkhadgp3GF8gGQiRz01zUlnUfiPnMds5LtwKe7uYebAQO%2FONyMLGA%2BM4GOqUBRzFMLJnrcwMswRD2RdsAetwa1gtjOKuI4ojmF4QXRNjcUPsS8lGUZJ5GgnIeGhnmH8qtNRb8rRu5T96MwRzTREvAi8bSUogFZWV2NYkom8%2F0QZifhkghuGiAo3PSijxca2pALEqHvChQNQjBtuEA5LwYte6MXulo%2BZQnwFEkkqF09ZvXFD1ZRGfzs2bIqVWTNRC2V3pxf6Ic1L%2Bb5xh7n%2FowIUiT&X-Amz-Signature=c258ec6ac1b77b1541a11e75a0e43911ae17ee618fa56eb94e3f1812f4cc519a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QYHIGEWE%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDG43zKbemNQ18ep7SEMFGj%2FBUSng6xbOjlvzJ06r1%2BdwIhAN8Xzonleve6XFpUMWBs14DYXcM10yS7j9viFuv21nqaKogECIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxRvmgwn7z3GaLr404q3AP5GDoEZupBDHgn67JBzU%2BI6Sivl10ALyWDw4uJDXbKx8i%2BuXU7ZbXhK6hOgLQenggMWkM2mLVeL93SCrBeoOsulMxGMD2fqXK7Iigzye4fBbTJ%2BF0EUterr9xcozRO4C7FF0VfzjIz42DhLAggDZ9yuWQyxwfMFVv4hFYr%2Bzu3rQoEXGkm3OMXkzWzS7oANnjVw4Mez89XJl%2BKaSF9i6QKhCtnVmFVaz%2FMI7krOA3nJptfkwvNEmkxk6uKifnXTvgQfv57RyW3Qoada15hwTf0BpoYTeiFov7xZWT8NTdbpcDx7C6ylHtkx4n7ouelUjXL1u5ud0TB%2Bdt8n6mwGiNZ4FTkTzCLXk4PAeUb6UjUKSkWD0z0ddXVAfJCbKt1%2Ba4qS19Xa8dUSb9j6pqhi%2FmwGjrsLS4E3IaNrY1PWqkQ847kNdnsOK4Fl%2BONb5GXCIykZBw%2F2zCnGX3zQWVDtk%2BL1SRHyrHbhlQL%2BYXC3WAvBw1vFsQws12OW5I3qgVB28rheKdTl9rZiX5xul5cevMTgsG6%2F%2Bug1oiIHi5dd647u76%2FFKyilvFOotC8A1XN6ei0k2xtdxZhdv%2FwJM5lsN3mpfRsdLjqJv0Zi9LusL73e5RJ5tgStpbJiquZRTDT%2FvfOBjqkAYeW8rBn%2Bba1%2BO9i3HTbkhdczAMo5Pgeo%2BDY9%2B10SfvQ31zIKJWJXIEo2pLz5QnMOzPDX8BBjubTBg2%2FukuCPT9reFaEOmJiW4cEkujjQHjASs8mk9xypMvfMz7zO4Z%2FzlY4WceqyZMjKlythwd1XHhKsI98qOyDjnp%2BRM7hXDZj6k6QqpDo1i7WHtuKzwf31XUKJflCOqFixKgHtTeDhMMoWt4N&X-Amz-Signature=53c8faf5d2e039f66f1a0b63f8fa94cd3118dc0bed88b64584ea962808e15b0e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WFU7T2NH%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091713Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICRka1vPaGzNzqjbi59sFSqnHLOnawg057MJxrVFnlvJAiA0k4RzjZpcXfFqihchvB20FAPRFLVLiwopL4NzVbATGSqIBAiK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMJvyDQNaMcXjCMRHdKtwD%2BK9iiEJ4VVLkCByqh9AfjtiHqoEhchcMlOfz9QnQSEBAcxQv8Pswi%2FOD%2FzhiPCeEk6Igu5BMuP182EUW%2B%2Bv13fy0txbTGI0rw3wTWVHNJr%2FvhmUHCSLT8ILS%2FI5DETcSs1LbodBvFiBEDr5F7kLPgoFcHQXnPDrte%2FeJNofzmdiYR37wWOa%2Fm0Y4FbDZ%2FpkJSOtq7YZ3vlhbu5CuCU2NP6Z3bB9WpCgmz77QzQVlH8o2ZmKfMTuPiXp5%2FvAcJXY5wvV%2Bl5K1YPp4ULf3VYl4dNt4B9RlKVKyu8VWDdG%2B1oN1N14B580PMZo%2BfWTc2ULcTUIHf7Ac9kE1%2FVUbXmz3L0eu4EERQgXAxNjDFd7QrOn2Fja%2BWk2r40TL8dvXM%2F6QMdUGXd4oATDxr2O9AtSN5v3DfPClm4L6z%2BYoe9wInD2XTauTU3PglT5%2Bq3sbV472sEpYi33DDxZ977diQ8frDjVciaqwtNBsVTEjgwk52YG%2FAdwqJWQkwEDxfZJl%2BYAuNwDx8VYJs8duY3RKnINe7xrTapSYvRJyb1nVhJa%2BYJrn1LmOjdNdnPoNN23gdVTln4ljzZMAfRuCF787P%2FTIeTx6AMbLi3bONzRHJPZlaiMIx0lBKJzbQkz1mZYwo%2F73zgY6pgGv85i1o1ZEsR3xgDUW85wJNk6L2PZDARm%2FwRj8El0k71VSUxBAoRRh2rRb6MdIM9uZAQConBaV%2B63ZFFTrGebMNFNxZvSg24bBeDQ2pnitIUFxmy1HJPnE4G%2Fi%2F2d4iFyQ13MLZ9jCXb2o16dX%2BfempThHiecSS%2FqO69Uzj2NFB9Dhk9OdU0Yjqkdy7sJJXdE41Sm9Y%2FhVrjJslbtd5OvSIolYOOLw&X-Amz-Signature=ee6df4f077367af5231272eae9e49840a588220d38dcb39dc5b26438a9cc8779&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WFU7T2NH%2F20260414%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260414T091713Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICRka1vPaGzNzqjbi59sFSqnHLOnawg057MJxrVFnlvJAiA0k4RzjZpcXfFqihchvB20FAPRFLVLiwopL4NzVbATGSqIBAiK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMJvyDQNaMcXjCMRHdKtwD%2BK9iiEJ4VVLkCByqh9AfjtiHqoEhchcMlOfz9QnQSEBAcxQv8Pswi%2FOD%2FzhiPCeEk6Igu5BMuP182EUW%2B%2Bv13fy0txbTGI0rw3wTWVHNJr%2FvhmUHCSLT8ILS%2FI5DETcSs1LbodBvFiBEDr5F7kLPgoFcHQXnPDrte%2FeJNofzmdiYR37wWOa%2Fm0Y4FbDZ%2FpkJSOtq7YZ3vlhbu5CuCU2NP6Z3bB9WpCgmz77QzQVlH8o2ZmKfMTuPiXp5%2FvAcJXY5wvV%2Bl5K1YPp4ULf3VYl4dNt4B9RlKVKyu8VWDdG%2B1oN1N14B580PMZo%2BfWTc2ULcTUIHf7Ac9kE1%2FVUbXmz3L0eu4EERQgXAxNjDFd7QrOn2Fja%2BWk2r40TL8dvXM%2F6QMdUGXd4oATDxr2O9AtSN5v3DfPClm4L6z%2BYoe9wInD2XTauTU3PglT5%2Bq3sbV472sEpYi33DDxZ977diQ8frDjVciaqwtNBsVTEjgwk52YG%2FAdwqJWQkwEDxfZJl%2BYAuNwDx8VYJs8duY3RKnINe7xrTapSYvRJyb1nVhJa%2BYJrn1LmOjdNdnPoNN23gdVTln4ljzZMAfRuCF787P%2FTIeTx6AMbLi3bONzRHJPZlaiMIx0lBKJzbQkz1mZYwo%2F73zgY6pgGv85i1o1ZEsR3xgDUW85wJNk6L2PZDARm%2FwRj8El0k71VSUxBAoRRh2rRb6MdIM9uZAQConBaV%2B63ZFFTrGebMNFNxZvSg24bBeDQ2pnitIUFxmy1HJPnE4G%2Fi%2F2d4iFyQ13MLZ9jCXb2o16dX%2BfempThHiecSS%2FqO69Uzj2NFB9Dhk9OdU0Yjqkdy7sJJXdE41Sm9Y%2FhVrjJslbtd5OvSIolYOOLw&X-Amz-Signature=9a1413f6554ef8714a99e0dbafc4a06d62fbf17bd8bc691a6d965cf7afd18075&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
