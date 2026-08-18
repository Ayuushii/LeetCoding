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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666FAOUG2Q%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDUoBZL3Ip3PQ0EChxz7A4K2tN%2FCUA%2F58s8dR4EvVTXtQIhAIdCkNKd4JlPH5AJBdiqUqkSb8nZHv%2FdPRguW2nDYy4TKv8DCFgQABoMNjM3NDIzMTgzODA1IgyqNuF2vsQAyJOrHdAq3APKg%2BMcqx%2BHebEUSwxXl4CWdbCKkbCLi0ldKUEG6BnXUPCd6jTJx5vm5Ovgj9K6L%2BNc%2FfnQuWMRwZlYt8Yle1XXgbpEJIX2yr8hWK5aqj7WcN7Djb8%2FjaTL4gZOp59Y%2BRJmgviju9uVKfnE6Sht9TKJRNwC0KmnseAbtzKTWm%2BEnw6Brg2sPUUeUmuZ2mGZrnisnOfFBSlKOWnemgosQPgbReMP8S6MhhbeVFGMRYtBJ%2Fq9ayD5gc7HXXrkJSjPOut0eEr%2Btf8jj7bAhFaZhoq6xN1MuYxlktna7Styjlflfxc1pP8oewqwTjPyb9UfDY66G4Q%2FSgnvlDuzkSApWYbuFrOTPf9wX9rldCse61Juxkh52P%2BmuW4IgRzgE2FQbbn9jOya77P1fTdnwXjCMNLZoLZxXUke9z3y9O1n%2BG7A5awnt8Cv55Vq737vpbGb14f6GKDBq%2Ff5UG4b7dHC2c1%2BBJw0%2BCtDUEQjUhKQ%2F17punb5MqaRY0ecBBK5otL1jR0zrJJyeY96eS5WP268Sy6IAKnqgWA2Ray30CfP%2FZuFsEOnmJmnlJ0nrftpi5jctZ4c7GR%2FuIBq3S%2F5xLaRha3GXk0Lx4OCwz%2FCldL1%2F5WJTs606VWx6YaJMNu%2FkjDJgZDUBjqkARN5V%2BYopjXuP26y6XGlIJQIgip%2Fwqu4I706YNMLhWkuwl9fOOxspIFFwlF9EqDtCKg0tAdfmLkk26jE82aYDFpS7zt5JRB%2Bb4EAPIQ%2BW8LkUhOluY4pYfR35QfcOO3Q13YoefG%2BdyPpZK4wFwx9c%2Bz9wYkfC3Ts1k6ijPQ3Ld5PmQrfgZVx67OoClPcQe%2BYR%2FtiF4RoT%2BNDWI105IwNzG5%2B7H1D&X-Amz-Signature=7bea498ad6c3c190d5ceecd7df820d5a2ae96e9d86dbea4d10ec37b84ac08fd3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666FAOUG2Q%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDUoBZL3Ip3PQ0EChxz7A4K2tN%2FCUA%2F58s8dR4EvVTXtQIhAIdCkNKd4JlPH5AJBdiqUqkSb8nZHv%2FdPRguW2nDYy4TKv8DCFgQABoMNjM3NDIzMTgzODA1IgyqNuF2vsQAyJOrHdAq3APKg%2BMcqx%2BHebEUSwxXl4CWdbCKkbCLi0ldKUEG6BnXUPCd6jTJx5vm5Ovgj9K6L%2BNc%2FfnQuWMRwZlYt8Yle1XXgbpEJIX2yr8hWK5aqj7WcN7Djb8%2FjaTL4gZOp59Y%2BRJmgviju9uVKfnE6Sht9TKJRNwC0KmnseAbtzKTWm%2BEnw6Brg2sPUUeUmuZ2mGZrnisnOfFBSlKOWnemgosQPgbReMP8S6MhhbeVFGMRYtBJ%2Fq9ayD5gc7HXXrkJSjPOut0eEr%2Btf8jj7bAhFaZhoq6xN1MuYxlktna7Styjlflfxc1pP8oewqwTjPyb9UfDY66G4Q%2FSgnvlDuzkSApWYbuFrOTPf9wX9rldCse61Juxkh52P%2BmuW4IgRzgE2FQbbn9jOya77P1fTdnwXjCMNLZoLZxXUke9z3y9O1n%2BG7A5awnt8Cv55Vq737vpbGb14f6GKDBq%2Ff5UG4b7dHC2c1%2BBJw0%2BCtDUEQjUhKQ%2F17punb5MqaRY0ecBBK5otL1jR0zrJJyeY96eS5WP268Sy6IAKnqgWA2Ray30CfP%2FZuFsEOnmJmnlJ0nrftpi5jctZ4c7GR%2FuIBq3S%2F5xLaRha3GXk0Lx4OCwz%2FCldL1%2F5WJTs606VWx6YaJMNu%2FkjDJgZDUBjqkARN5V%2BYopjXuP26y6XGlIJQIgip%2Fwqu4I706YNMLhWkuwl9fOOxspIFFwlF9EqDtCKg0tAdfmLkk26jE82aYDFpS7zt5JRB%2Bb4EAPIQ%2BW8LkUhOluY4pYfR35QfcOO3Q13YoefG%2BdyPpZK4wFwx9c%2Bz9wYkfC3Ts1k6ijPQ3Ld5PmQrfgZVx67OoClPcQe%2BYR%2FtiF4RoT%2BNDWI105IwNzG5%2B7H1D&X-Amz-Signature=c3de1c7b77fd248cb2d6baff63703f5f123cde71a4730ce8aa1cb04483631a7c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666FAOUG2Q%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDUoBZL3Ip3PQ0EChxz7A4K2tN%2FCUA%2F58s8dR4EvVTXtQIhAIdCkNKd4JlPH5AJBdiqUqkSb8nZHv%2FdPRguW2nDYy4TKv8DCFgQABoMNjM3NDIzMTgzODA1IgyqNuF2vsQAyJOrHdAq3APKg%2BMcqx%2BHebEUSwxXl4CWdbCKkbCLi0ldKUEG6BnXUPCd6jTJx5vm5Ovgj9K6L%2BNc%2FfnQuWMRwZlYt8Yle1XXgbpEJIX2yr8hWK5aqj7WcN7Djb8%2FjaTL4gZOp59Y%2BRJmgviju9uVKfnE6Sht9TKJRNwC0KmnseAbtzKTWm%2BEnw6Brg2sPUUeUmuZ2mGZrnisnOfFBSlKOWnemgosQPgbReMP8S6MhhbeVFGMRYtBJ%2Fq9ayD5gc7HXXrkJSjPOut0eEr%2Btf8jj7bAhFaZhoq6xN1MuYxlktna7Styjlflfxc1pP8oewqwTjPyb9UfDY66G4Q%2FSgnvlDuzkSApWYbuFrOTPf9wX9rldCse61Juxkh52P%2BmuW4IgRzgE2FQbbn9jOya77P1fTdnwXjCMNLZoLZxXUke9z3y9O1n%2BG7A5awnt8Cv55Vq737vpbGb14f6GKDBq%2Ff5UG4b7dHC2c1%2BBJw0%2BCtDUEQjUhKQ%2F17punb5MqaRY0ecBBK5otL1jR0zrJJyeY96eS5WP268Sy6IAKnqgWA2Ray30CfP%2FZuFsEOnmJmnlJ0nrftpi5jctZ4c7GR%2FuIBq3S%2F5xLaRha3GXk0Lx4OCwz%2FCldL1%2F5WJTs606VWx6YaJMNu%2FkjDJgZDUBjqkARN5V%2BYopjXuP26y6XGlIJQIgip%2Fwqu4I706YNMLhWkuwl9fOOxspIFFwlF9EqDtCKg0tAdfmLkk26jE82aYDFpS7zt5JRB%2Bb4EAPIQ%2BW8LkUhOluY4pYfR35QfcOO3Q13YoefG%2BdyPpZK4wFwx9c%2Bz9wYkfC3Ts1k6ijPQ3Ld5PmQrfgZVx67OoClPcQe%2BYR%2FtiF4RoT%2BNDWI105IwNzG5%2B7H1D&X-Amz-Signature=e54d2d1ac6107446a165f382934f4a70c47a83342b4966d994520804dc0e794d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XFQ7CGB%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCG6qdluyGFysmvb%2F3%2F3%2Fl8ybtf11VRbR10BjB1gPzikAIgbLQoCbeAwqbxm7UP063Yf290%2B8Arr0waLUIGYPnIlDAq%2FwMIWBAAGgw2Mzc0MjMxODM4MDUiDIZaFe4um0JtjYZKyyrcA1w4zHpbCqHY38jlTfwORsO7LbLDqQ7%2FzioTJ7XnJZqFDbDCUhvIPTVjdFE1ylBkSuROaCa%2BugMV3boU%2FH9QRg7aM4VjB%2FNNUvVL2PtdC06MKWM%2FGWOYuy0jsneWCY5DDhpJUF9SPUmG%2F2l7NJLm%2BPL2vtzkO%2BOTx7hyg5tu%2BGRPHFgGuPii1agbDO5qUBV8Ainx9DAWLTme3IHHi%2F9Fg46071JV%2FyOyQ1DaHNvBJn6QkcjVhkY5i1o7cuPHtmLb1c33BxNWXxpozpBU5q3xanuds3BQHFS6lgNIUb9qkI7GCtPXdcz8sFnXT%2F4YRa4VDRHYkbhKhkVnJRHcxKuq4EFlvkWn9UYF0jqrrK4NxJyKoCDoIMIglHKkIIN6Ho66jYkA1AScUnimNWGhpKy3DRdfgRF1Il8No93rjaKwnBrp%2FevxD%2FLwsdy3nkN4byl26pnFytFDxm1IfyyKBE%2FRcZNn2i4YACnE4PLgUEquD9Kxtbcf7WOpn2TGnPkto5LQV8oWUL%2BbxLbaiE3zll3sDGM4aLy2yJZQ0DTXbjolL%2F%2B%2B3INRKA4yPhWecai95OcPR2BFBTOcRBYiQAiAjktDRWMDRO3PP8k7v%2FlBol4TtSiQz8d%2F%2BQVa0DcH%2FWvpMI6AkNQGOqUBPH8FOwJhVJ5a%2FYpUZI870wDe3pGOYlvQQQNVBjpMY7MjdofLqi35d2LJ6bO3oz61F6GDmTleM5CQRKwUCPvPKLO1NjBx0IhMEo%2FGEsZwzxLp22%2FEvd06JUdDCUAxO3b2rkrqFOvVLyh4vQHzFaROuwkm4G3UEQtE2Y9Tn4eLK2YTF9AR8fMei1G%2FDfDFaCLYDClFERbjsgfvgaj%2FwQhg2ssvuW6K&X-Amz-Signature=0ba2f4121d0150e488ffbafed0038aa16a459ee29b39edb2b0323341f1f22dc2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XFQ7CGB%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCG6qdluyGFysmvb%2F3%2F3%2Fl8ybtf11VRbR10BjB1gPzikAIgbLQoCbeAwqbxm7UP063Yf290%2B8Arr0waLUIGYPnIlDAq%2FwMIWBAAGgw2Mzc0MjMxODM4MDUiDIZaFe4um0JtjYZKyyrcA1w4zHpbCqHY38jlTfwORsO7LbLDqQ7%2FzioTJ7XnJZqFDbDCUhvIPTVjdFE1ylBkSuROaCa%2BugMV3boU%2FH9QRg7aM4VjB%2FNNUvVL2PtdC06MKWM%2FGWOYuy0jsneWCY5DDhpJUF9SPUmG%2F2l7NJLm%2BPL2vtzkO%2BOTx7hyg5tu%2BGRPHFgGuPii1agbDO5qUBV8Ainx9DAWLTme3IHHi%2F9Fg46071JV%2FyOyQ1DaHNvBJn6QkcjVhkY5i1o7cuPHtmLb1c33BxNWXxpozpBU5q3xanuds3BQHFS6lgNIUb9qkI7GCtPXdcz8sFnXT%2F4YRa4VDRHYkbhKhkVnJRHcxKuq4EFlvkWn9UYF0jqrrK4NxJyKoCDoIMIglHKkIIN6Ho66jYkA1AScUnimNWGhpKy3DRdfgRF1Il8No93rjaKwnBrp%2FevxD%2FLwsdy3nkN4byl26pnFytFDxm1IfyyKBE%2FRcZNn2i4YACnE4PLgUEquD9Kxtbcf7WOpn2TGnPkto5LQV8oWUL%2BbxLbaiE3zll3sDGM4aLy2yJZQ0DTXbjolL%2F%2B%2B3INRKA4yPhWecai95OcPR2BFBTOcRBYiQAiAjktDRWMDRO3PP8k7v%2FlBol4TtSiQz8d%2F%2BQVa0DcH%2FWvpMI6AkNQGOqUBPH8FOwJhVJ5a%2FYpUZI870wDe3pGOYlvQQQNVBjpMY7MjdofLqi35d2LJ6bO3oz61F6GDmTleM5CQRKwUCPvPKLO1NjBx0IhMEo%2FGEsZwzxLp22%2FEvd06JUdDCUAxO3b2rkrqFOvVLyh4vQHzFaROuwkm4G3UEQtE2Y9Tn4eLK2YTF9AR8fMei1G%2FDfDFaCLYDClFERbjsgfvgaj%2FwQhg2ssvuW6K&X-Amz-Signature=524c721eed57143dbe19b7cdabee45510ff2408c9fd0383f82ca71ae739f2b0f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XFQ7CGB%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCG6qdluyGFysmvb%2F3%2F3%2Fl8ybtf11VRbR10BjB1gPzikAIgbLQoCbeAwqbxm7UP063Yf290%2B8Arr0waLUIGYPnIlDAq%2FwMIWBAAGgw2Mzc0MjMxODM4MDUiDIZaFe4um0JtjYZKyyrcA1w4zHpbCqHY38jlTfwORsO7LbLDqQ7%2FzioTJ7XnJZqFDbDCUhvIPTVjdFE1ylBkSuROaCa%2BugMV3boU%2FH9QRg7aM4VjB%2FNNUvVL2PtdC06MKWM%2FGWOYuy0jsneWCY5DDhpJUF9SPUmG%2F2l7NJLm%2BPL2vtzkO%2BOTx7hyg5tu%2BGRPHFgGuPii1agbDO5qUBV8Ainx9DAWLTme3IHHi%2F9Fg46071JV%2FyOyQ1DaHNvBJn6QkcjVhkY5i1o7cuPHtmLb1c33BxNWXxpozpBU5q3xanuds3BQHFS6lgNIUb9qkI7GCtPXdcz8sFnXT%2F4YRa4VDRHYkbhKhkVnJRHcxKuq4EFlvkWn9UYF0jqrrK4NxJyKoCDoIMIglHKkIIN6Ho66jYkA1AScUnimNWGhpKy3DRdfgRF1Il8No93rjaKwnBrp%2FevxD%2FLwsdy3nkN4byl26pnFytFDxm1IfyyKBE%2FRcZNn2i4YACnE4PLgUEquD9Kxtbcf7WOpn2TGnPkto5LQV8oWUL%2BbxLbaiE3zll3sDGM4aLy2yJZQ0DTXbjolL%2F%2B%2B3INRKA4yPhWecai95OcPR2BFBTOcRBYiQAiAjktDRWMDRO3PP8k7v%2FlBol4TtSiQz8d%2F%2BQVa0DcH%2FWvpMI6AkNQGOqUBPH8FOwJhVJ5a%2FYpUZI870wDe3pGOYlvQQQNVBjpMY7MjdofLqi35d2LJ6bO3oz61F6GDmTleM5CQRKwUCPvPKLO1NjBx0IhMEo%2FGEsZwzxLp22%2FEvd06JUdDCUAxO3b2rkrqFOvVLyh4vQHzFaROuwkm4G3UEQtE2Y9Tn4eLK2YTF9AR8fMei1G%2FDfDFaCLYDClFERbjsgfvgaj%2FwQhg2ssvuW6K&X-Amz-Signature=3211021f9115a3bb2f8c4f36eebecd8b9e63e5c491f8fb25cd0de94e1c03faf2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XFQ7CGB%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCG6qdluyGFysmvb%2F3%2F3%2Fl8ybtf11VRbR10BjB1gPzikAIgbLQoCbeAwqbxm7UP063Yf290%2B8Arr0waLUIGYPnIlDAq%2FwMIWBAAGgw2Mzc0MjMxODM4MDUiDIZaFe4um0JtjYZKyyrcA1w4zHpbCqHY38jlTfwORsO7LbLDqQ7%2FzioTJ7XnJZqFDbDCUhvIPTVjdFE1ylBkSuROaCa%2BugMV3boU%2FH9QRg7aM4VjB%2FNNUvVL2PtdC06MKWM%2FGWOYuy0jsneWCY5DDhpJUF9SPUmG%2F2l7NJLm%2BPL2vtzkO%2BOTx7hyg5tu%2BGRPHFgGuPii1agbDO5qUBV8Ainx9DAWLTme3IHHi%2F9Fg46071JV%2FyOyQ1DaHNvBJn6QkcjVhkY5i1o7cuPHtmLb1c33BxNWXxpozpBU5q3xanuds3BQHFS6lgNIUb9qkI7GCtPXdcz8sFnXT%2F4YRa4VDRHYkbhKhkVnJRHcxKuq4EFlvkWn9UYF0jqrrK4NxJyKoCDoIMIglHKkIIN6Ho66jYkA1AScUnimNWGhpKy3DRdfgRF1Il8No93rjaKwnBrp%2FevxD%2FLwsdy3nkN4byl26pnFytFDxm1IfyyKBE%2FRcZNn2i4YACnE4PLgUEquD9Kxtbcf7WOpn2TGnPkto5LQV8oWUL%2BbxLbaiE3zll3sDGM4aLy2yJZQ0DTXbjolL%2F%2B%2B3INRKA4yPhWecai95OcPR2BFBTOcRBYiQAiAjktDRWMDRO3PP8k7v%2FlBol4TtSiQz8d%2F%2BQVa0DcH%2FWvpMI6AkNQGOqUBPH8FOwJhVJ5a%2FYpUZI870wDe3pGOYlvQQQNVBjpMY7MjdofLqi35d2LJ6bO3oz61F6GDmTleM5CQRKwUCPvPKLO1NjBx0IhMEo%2FGEsZwzxLp22%2FEvd06JUdDCUAxO3b2rkrqFOvVLyh4vQHzFaROuwkm4G3UEQtE2Y9Tn4eLK2YTF9AR8fMei1G%2FDfDFaCLYDClFERbjsgfvgaj%2FwQhg2ssvuW6K&X-Amz-Signature=701986f300b265e9352d42d0407d939d9437e9ef91fcefc81804235214f1695c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665ONRPQAU%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICqyn35aqqVVZOaoJZucbvGH9fxHSdhOw8VmnaWVPHNIAiEA6Jy6CgPqJFWDnptkByNHPbgrfTv7HH2Vfv4ZlzasisQq%2FwMIWBAAGgw2Mzc0MjMxODM4MDUiDJVfGHee0Jl2kHuVByrcA3X6IXt9LGCzL42syaZvHnz3FrEFWgI2kYqHMk3hLvFSRsUH%2BL8xdOL0YIhZO2njPpLG2uFKBvuiIhvhG52%2FkSbt%2FrIrQ4x8BwYuFfWuXNJ%2FHOL3SmykV81NhZKHQ8kRLX9QE4NBTfXHpKV%2FEVfQ4uhz7tN18oWgx%2Bioo%2By2qWWZ%2BAjkXwzL1Vn6VzYm90Nw1fpLaNOvAtDkhIOW4k3Zsyt2%2FWnq%2BzNxi%2FGp3Smy8Ki0ZKNfyF2KzBacxooqKHrAe6uPyihP8sclLykeIVroCj9uxXGG0xcyZodHylNRH0SuvjHJjF340xpTJOw5aanquVfaJGwRx4%2BtXJsC%2BjwwrOBH5lkLaANjLbjuwUVyuDiWRpg%2BW%2B0VSvhjWXcqTVzRyhMI5%2ByVCDaoQm5U0p2UTPohprvBO2HbiIjjH1kB%2B3sQGFv8Do7zBxxjKQswXiR2sb9eMC3DXI2ZahmGYL4yl1Kq%2BWm3jhLtn0rCd0UAA3D7UPBvvTvWtJ8Wv7LTA1DBLYzkdCNYy8ocrfJqXYS1W%2F%2BaijrLycFxzQdnUy8Ptn9uxXe7vcSwlYx9A6MAk%2FGZgx5TFQS%2FLtFSDXPtirYguXZA%2BoeEup4gn8ITy%2B1e8bcOHGezODp%2FleYvh9jKMN6AkNQGOqUBXMvK2aP5PrlNZh4lhGqezjPO7Q95RvSELjw4YWeCqIfXaJOP6%2F86rcss3rQlXEbxEa9jRUCZcbQzCGB03XuQDKR%2FmD71L8fkag22C2VnPCu7H4OsltzygMyKAM9QfjEMpqn5n%2FWbPnYLwXLiFBpipwGkEgAXJvpvRntaok8EMopfbt%2BSva0jtKsSxO2JatiORKXuPMD1wza1qQVEcV8ly7JFM36T&X-Amz-Signature=b68e0fc633193ea11c4f4fe31a5d90c0284d99550a88e399a5578601a633a97b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKX6766K%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDKC1DBgZtO5UE9x4G55YjKp0zCbrFObWHzFDtTHioi%2FQIhAO820zAwOCNi%2F1TjGC55vJZnCdCugEjTAwhMqKCiP1EhKv8DCFgQABoMNjM3NDIzMTgzODA1Igx258pc3TzjPHQO3jEq3ANV8d0oHZIDZ6Hh02ZfAhTrwfq68JUkVlL37SzqMWdzkxa3yYzAvsER19UDUpD0K3tMNz5bX4ZTezOrthqn3PUI5RuEPapUBZfP6I0B3njlR8PKQCQax9hj1ldKA%2FhEyfokpa7Cz1m925CBScSV2FeQXeJDOnUrkpp%2BU165T1Z%2FHQxUR7p5ZJIUbT3DSRhEdtJm3%2F5h540puguRnOJw%2B4Ji4kzjdVssJzZOqVHq22sWDDsfelVoHxOtRrDrXvz7nQCz3ow%2FQJJL%2Bn%2FvmXKSUSaqccRxo%2FnCukxsPxdcZyBMiungmZyi13gDFr6Bo1oYiAqgdXBNEJk9NYVB9erlmxdqybHWoo1GowJf5mUn9D3pf7FRYPWwtWVeChq5ZQpzNmVt5%2FSGxwNd8qJhgo9peRfSFXmvdwrZwcruCxSj0HbCTUtzNFl8d%2B%2BdslenDt3ILho%2B1La4RBvsX0cXXHs2XanpbkF9KIDeN61nKxKxa1oOFV8qqcWk1Kio0KRwLHTdJNRqfRbjTH%2FwIHMrDpYXin9de9zJBSqOAlV8Xf6pqmB1O7RPMPMdk4xmxreOBHTkFmWRjcEY5%2FHsqmn7aFKdSvBk3Zr44N%2Bo1uyHVbth17E0NDHgPOKuGB7SZZwJCjD3%2FY%2FUBjqkAbIe2ln9UjabuM8ulIGpGdCYQGrZ4r8tG1r%2BQqpQP3opcPhrjvHeEHe9guH%2B88ewQbPMYvld1rUI%2FArZqLcwsJGJ2zveIErUu2Eaqcg8OyJgi6hhBancMfebfvuMCDmPJXT1WYSWsTjNEQMXeoVpCPeKZ%2BWhEf9wClv3%2BA5JGGqG8xPT5aLR8EsuY0boVdW1tqqxVnuKiQnZyC7o2MYCZnTj4v6N&X-Amz-Signature=2cd096048d55d3fe5cd614d796973f6bd4e0192c33531ba798a65fe536380623&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKX6766K%2F20260818%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260818T083419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDKC1DBgZtO5UE9x4G55YjKp0zCbrFObWHzFDtTHioi%2FQIhAO820zAwOCNi%2F1TjGC55vJZnCdCugEjTAwhMqKCiP1EhKv8DCFgQABoMNjM3NDIzMTgzODA1Igx258pc3TzjPHQO3jEq3ANV8d0oHZIDZ6Hh02ZfAhTrwfq68JUkVlL37SzqMWdzkxa3yYzAvsER19UDUpD0K3tMNz5bX4ZTezOrthqn3PUI5RuEPapUBZfP6I0B3njlR8PKQCQax9hj1ldKA%2FhEyfokpa7Cz1m925CBScSV2FeQXeJDOnUrkpp%2BU165T1Z%2FHQxUR7p5ZJIUbT3DSRhEdtJm3%2F5h540puguRnOJw%2B4Ji4kzjdVssJzZOqVHq22sWDDsfelVoHxOtRrDrXvz7nQCz3ow%2FQJJL%2Bn%2FvmXKSUSaqccRxo%2FnCukxsPxdcZyBMiungmZyi13gDFr6Bo1oYiAqgdXBNEJk9NYVB9erlmxdqybHWoo1GowJf5mUn9D3pf7FRYPWwtWVeChq5ZQpzNmVt5%2FSGxwNd8qJhgo9peRfSFXmvdwrZwcruCxSj0HbCTUtzNFl8d%2B%2BdslenDt3ILho%2B1La4RBvsX0cXXHs2XanpbkF9KIDeN61nKxKxa1oOFV8qqcWk1Kio0KRwLHTdJNRqfRbjTH%2FwIHMrDpYXin9de9zJBSqOAlV8Xf6pqmB1O7RPMPMdk4xmxreOBHTkFmWRjcEY5%2FHsqmn7aFKdSvBk3Zr44N%2Bo1uyHVbth17E0NDHgPOKuGB7SZZwJCjD3%2FY%2FUBjqkAbIe2ln9UjabuM8ulIGpGdCYQGrZ4r8tG1r%2BQqpQP3opcPhrjvHeEHe9guH%2B88ewQbPMYvld1rUI%2FArZqLcwsJGJ2zveIErUu2Eaqcg8OyJgi6hhBancMfebfvuMCDmPJXT1WYSWsTjNEQMXeoVpCPeKZ%2BWhEf9wClv3%2BA5JGGqG8xPT5aLR8EsuY0boVdW1tqqxVnuKiQnZyC7o2MYCZnTj4v6N&X-Amz-Signature=842a4e0fe78149096ff1c348f6ce30f4c6e67a3b17db405bf878f0a8399d1358&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
