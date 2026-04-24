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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BQBBW7C%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094411Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDDHl6CBAohet1jwGyBJzvRin4pTHaDJbFoE46Gm8RS8AiA%2Ba36ligS3YYi20H%2FKbGuUWHmD3Js9tuNpQ3PjcDj7yCr%2FAwh7EAAaDDYzNzQyMzE4MzgwNSIMIRpiuwhbBH9ZptB2KtwDBELyRT5SZiQVVYBVqcxDngIdbxrieCaFMrWWNKr3dBKgnoFq9yUzGX4pKH%2BPAAnEv8YKh59zFkbxQQtZ6ecXUYDVk49m9f%2BFov90l4Gu1yYJrQm1zt4IaFYtu82tpSHBwp9aIL%2FTLcsX%2B7iwie1zGsR0BaplvXVmrWXTSoSm5EI9mDph1WY7NG%2FyR2D5eQdAJlC%2Fgh4Vq2A82eNX%2BiiRWZzEiCy3IWxPX3MdZb9PwTtJiDk5XnobzUoMzRFKme8Llg9yWxfPXpFwLodYvbKXNcYqEGNSG7V0btR3jxb9Ka2D55jRwkXZe%2FiPWUZ4jxjDRrJbRmGjySmFXml9D1i236oTHTKvfBIhyzo2YYeX6KowupMTQQMT5Qana4KWdzZd07Mx%2Bp7WijjnYoLPBG0XmVF7lrEqvTjqK6jXh2w5NKD39N3ungkWJKTPX7ETrDbSnUlpYaku3snY%2F32w7HwpWSkV4Cn0LhiQxKCq4MJ1hSkGXek09geYyvAKD2lWbyn7OiMs6HZafs3d5Fz3ZQPdUADTcmMOIXgm1hchlUqVs1Ug2J7S4kTNgjfJjcJO5npWcVeD2EQbY27Odrrs45ZwQ3x71hqhM2ROr4c4pbdilXcAhrsCRqNnvNgL0ccwu%2B2szwY6pgG6dvbUuS5%2BEnem9vgrGi31h2UnaCSJt6PZKweJ1Hlvkc1oj12xZ9mvNGnuDhcB6LmuLJObuFoPtCtp1elkIqbk9D60Ijo166edaP8hHUccb42rBUruxpTZv2jkqHxUP6crwMNa1MPcPWY91VUAUHFrKd%2F4jgeOfJKxoxMJUOdBiSy9ZTdoW8gJcgoKkjzNN2T9HngSCqQMAQ0LdF5w9HpxSY46lwFj&X-Amz-Signature=519a9a3591e3d49fd78a4ce1a61e3cb87d9f1ba33933975bb18e39d011d08645&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BQBBW7C%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094411Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDDHl6CBAohet1jwGyBJzvRin4pTHaDJbFoE46Gm8RS8AiA%2Ba36ligS3YYi20H%2FKbGuUWHmD3Js9tuNpQ3PjcDj7yCr%2FAwh7EAAaDDYzNzQyMzE4MzgwNSIMIRpiuwhbBH9ZptB2KtwDBELyRT5SZiQVVYBVqcxDngIdbxrieCaFMrWWNKr3dBKgnoFq9yUzGX4pKH%2BPAAnEv8YKh59zFkbxQQtZ6ecXUYDVk49m9f%2BFov90l4Gu1yYJrQm1zt4IaFYtu82tpSHBwp9aIL%2FTLcsX%2B7iwie1zGsR0BaplvXVmrWXTSoSm5EI9mDph1WY7NG%2FyR2D5eQdAJlC%2Fgh4Vq2A82eNX%2BiiRWZzEiCy3IWxPX3MdZb9PwTtJiDk5XnobzUoMzRFKme8Llg9yWxfPXpFwLodYvbKXNcYqEGNSG7V0btR3jxb9Ka2D55jRwkXZe%2FiPWUZ4jxjDRrJbRmGjySmFXml9D1i236oTHTKvfBIhyzo2YYeX6KowupMTQQMT5Qana4KWdzZd07Mx%2Bp7WijjnYoLPBG0XmVF7lrEqvTjqK6jXh2w5NKD39N3ungkWJKTPX7ETrDbSnUlpYaku3snY%2F32w7HwpWSkV4Cn0LhiQxKCq4MJ1hSkGXek09geYyvAKD2lWbyn7OiMs6HZafs3d5Fz3ZQPdUADTcmMOIXgm1hchlUqVs1Ug2J7S4kTNgjfJjcJO5npWcVeD2EQbY27Odrrs45ZwQ3x71hqhM2ROr4c4pbdilXcAhrsCRqNnvNgL0ccwu%2B2szwY6pgG6dvbUuS5%2BEnem9vgrGi31h2UnaCSJt6PZKweJ1Hlvkc1oj12xZ9mvNGnuDhcB6LmuLJObuFoPtCtp1elkIqbk9D60Ijo166edaP8hHUccb42rBUruxpTZv2jkqHxUP6crwMNa1MPcPWY91VUAUHFrKd%2F4jgeOfJKxoxMJUOdBiSy9ZTdoW8gJcgoKkjzNN2T9HngSCqQMAQ0LdF5w9HpxSY46lwFj&X-Amz-Signature=825ac28a6d8ff95e8495db5201adc1a1dc81013fdae1ad156f16651e33cce089&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BQBBW7C%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094411Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDDHl6CBAohet1jwGyBJzvRin4pTHaDJbFoE46Gm8RS8AiA%2Ba36ligS3YYi20H%2FKbGuUWHmD3Js9tuNpQ3PjcDj7yCr%2FAwh7EAAaDDYzNzQyMzE4MzgwNSIMIRpiuwhbBH9ZptB2KtwDBELyRT5SZiQVVYBVqcxDngIdbxrieCaFMrWWNKr3dBKgnoFq9yUzGX4pKH%2BPAAnEv8YKh59zFkbxQQtZ6ecXUYDVk49m9f%2BFov90l4Gu1yYJrQm1zt4IaFYtu82tpSHBwp9aIL%2FTLcsX%2B7iwie1zGsR0BaplvXVmrWXTSoSm5EI9mDph1WY7NG%2FyR2D5eQdAJlC%2Fgh4Vq2A82eNX%2BiiRWZzEiCy3IWxPX3MdZb9PwTtJiDk5XnobzUoMzRFKme8Llg9yWxfPXpFwLodYvbKXNcYqEGNSG7V0btR3jxb9Ka2D55jRwkXZe%2FiPWUZ4jxjDRrJbRmGjySmFXml9D1i236oTHTKvfBIhyzo2YYeX6KowupMTQQMT5Qana4KWdzZd07Mx%2Bp7WijjnYoLPBG0XmVF7lrEqvTjqK6jXh2w5NKD39N3ungkWJKTPX7ETrDbSnUlpYaku3snY%2F32w7HwpWSkV4Cn0LhiQxKCq4MJ1hSkGXek09geYyvAKD2lWbyn7OiMs6HZafs3d5Fz3ZQPdUADTcmMOIXgm1hchlUqVs1Ug2J7S4kTNgjfJjcJO5npWcVeD2EQbY27Odrrs45ZwQ3x71hqhM2ROr4c4pbdilXcAhrsCRqNnvNgL0ccwu%2B2szwY6pgG6dvbUuS5%2BEnem9vgrGi31h2UnaCSJt6PZKweJ1Hlvkc1oj12xZ9mvNGnuDhcB6LmuLJObuFoPtCtp1elkIqbk9D60Ijo166edaP8hHUccb42rBUruxpTZv2jkqHxUP6crwMNa1MPcPWY91VUAUHFrKd%2F4jgeOfJKxoxMJUOdBiSy9ZTdoW8gJcgoKkjzNN2T9HngSCqQMAQ0LdF5w9HpxSY46lwFj&X-Amz-Signature=3acee9ed46892d3bd381ebb199c3265ef3802195237877d2ea6fd54edcadcf12&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663DS2XKZ6%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094411Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFUj%2BRZlnQT%2BIGws0PRWS3u4JEz77r7ww%2B%2F1DTudDdCJAiBqUk%2BdSuKM2SakktQosxMD7KmzNgui4woeLuTFCnv31ir%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIM16dKLMk%2FY57Gi6LKKtwDsSqaZ0H9HB0Ri8CYNkE9AMR00DhVWc21HTA7pGupmt%2FHLrtIYvbmaYBz2Jn%2Bkxxv2LsAoKiZMIQM2WTx9s5VxIYEfonPj%2BE5cYTjkW9KzU1v0cO2LvX0EBN5oW0V%2FlM77vH3TLWQem%2BETldyZyBdEeSRroCAajyKMrNu%2BKMs0%2FCffYSaLxdDa4BI43RQx8D7c3cg4CuYgDuIKYuCBRc484zL3t7fMP6BCZGGhrU%2BKpgO2ES9xRmCCCVvTb1LdGnZRhJLz9sKMjF%2FnGC05Cs%2F7Qkd9K57%2Fap8dr5JioSppBeZ7n0YcXBZDIl4gV48sikSTYRFudgLMuMyaARgd%2Fzkkqo0xgyXkOT7DvkpYv9kyid3btO77Go%2F1ZVGRIdkFKQRsHsSAzqAk9NfrCqB1V2mlWgLnbNQe%2F9jigY08Clmu1VyR68bHiV6bL%2FQG3Mr2MEssAhY6EtFJnUETsn08ZYPwChMAoMT6aagwBXWDlTibBvZNec1cWuD7PZu%2BX8fJcbNe9SKFmMDEmGw1AaNi2opix4LAE48j66VrLWoxZ%2FYtwn%2FtuqF9QxZseel6y1orhCnzOGE%2FGKEiZAH4JUoitag5MwtNRDhMC9SjYFILrGJK3sP2p8bhtbeJz83rkkw9%2BuszwY6pgE%2FzlIOaEBBCLtzn6MCosGOgqprpfg%2FueCvxjPi4yD3dOxwl8nb9ucg6Hx19CXCNAhkstwgfPt%2BL14BbvaI3iXbS036z9QVKaB6se%2Ftr8Gvtvxxm2LaNpVJm49lrNTyeKPJ6cUjPbeFCuTZwL93Kfnz2M8O9uMQadQ1A7J9XsiV4Dy0aacEiej0wKrIKZWQpjFSMIkR1cZ75bvsv5acJQoRymEYC%2Fks&X-Amz-Signature=28ebd91e420d764e9578e7edec26b3af4f27f3f84c4325b9e043169b040a96fb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663DS2XKZ6%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094411Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFUj%2BRZlnQT%2BIGws0PRWS3u4JEz77r7ww%2B%2F1DTudDdCJAiBqUk%2BdSuKM2SakktQosxMD7KmzNgui4woeLuTFCnv31ir%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIM16dKLMk%2FY57Gi6LKKtwDsSqaZ0H9HB0Ri8CYNkE9AMR00DhVWc21HTA7pGupmt%2FHLrtIYvbmaYBz2Jn%2Bkxxv2LsAoKiZMIQM2WTx9s5VxIYEfonPj%2BE5cYTjkW9KzU1v0cO2LvX0EBN5oW0V%2FlM77vH3TLWQem%2BETldyZyBdEeSRroCAajyKMrNu%2BKMs0%2FCffYSaLxdDa4BI43RQx8D7c3cg4CuYgDuIKYuCBRc484zL3t7fMP6BCZGGhrU%2BKpgO2ES9xRmCCCVvTb1LdGnZRhJLz9sKMjF%2FnGC05Cs%2F7Qkd9K57%2Fap8dr5JioSppBeZ7n0YcXBZDIl4gV48sikSTYRFudgLMuMyaARgd%2Fzkkqo0xgyXkOT7DvkpYv9kyid3btO77Go%2F1ZVGRIdkFKQRsHsSAzqAk9NfrCqB1V2mlWgLnbNQe%2F9jigY08Clmu1VyR68bHiV6bL%2FQG3Mr2MEssAhY6EtFJnUETsn08ZYPwChMAoMT6aagwBXWDlTibBvZNec1cWuD7PZu%2BX8fJcbNe9SKFmMDEmGw1AaNi2opix4LAE48j66VrLWoxZ%2FYtwn%2FtuqF9QxZseel6y1orhCnzOGE%2FGKEiZAH4JUoitag5MwtNRDhMC9SjYFILrGJK3sP2p8bhtbeJz83rkkw9%2BuszwY6pgE%2FzlIOaEBBCLtzn6MCosGOgqprpfg%2FueCvxjPi4yD3dOxwl8nb9ucg6Hx19CXCNAhkstwgfPt%2BL14BbvaI3iXbS036z9QVKaB6se%2Ftr8Gvtvxxm2LaNpVJm49lrNTyeKPJ6cUjPbeFCuTZwL93Kfnz2M8O9uMQadQ1A7J9XsiV4Dy0aacEiej0wKrIKZWQpjFSMIkR1cZ75bvsv5acJQoRymEYC%2Fks&X-Amz-Signature=cd190e883f2590dba7bbc2b1197cae68355abd521e874d42394011ef95a5592f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663DS2XKZ6%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094411Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFUj%2BRZlnQT%2BIGws0PRWS3u4JEz77r7ww%2B%2F1DTudDdCJAiBqUk%2BdSuKM2SakktQosxMD7KmzNgui4woeLuTFCnv31ir%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIM16dKLMk%2FY57Gi6LKKtwDsSqaZ0H9HB0Ri8CYNkE9AMR00DhVWc21HTA7pGupmt%2FHLrtIYvbmaYBz2Jn%2Bkxxv2LsAoKiZMIQM2WTx9s5VxIYEfonPj%2BE5cYTjkW9KzU1v0cO2LvX0EBN5oW0V%2FlM77vH3TLWQem%2BETldyZyBdEeSRroCAajyKMrNu%2BKMs0%2FCffYSaLxdDa4BI43RQx8D7c3cg4CuYgDuIKYuCBRc484zL3t7fMP6BCZGGhrU%2BKpgO2ES9xRmCCCVvTb1LdGnZRhJLz9sKMjF%2FnGC05Cs%2F7Qkd9K57%2Fap8dr5JioSppBeZ7n0YcXBZDIl4gV48sikSTYRFudgLMuMyaARgd%2Fzkkqo0xgyXkOT7DvkpYv9kyid3btO77Go%2F1ZVGRIdkFKQRsHsSAzqAk9NfrCqB1V2mlWgLnbNQe%2F9jigY08Clmu1VyR68bHiV6bL%2FQG3Mr2MEssAhY6EtFJnUETsn08ZYPwChMAoMT6aagwBXWDlTibBvZNec1cWuD7PZu%2BX8fJcbNe9SKFmMDEmGw1AaNi2opix4LAE48j66VrLWoxZ%2FYtwn%2FtuqF9QxZseel6y1orhCnzOGE%2FGKEiZAH4JUoitag5MwtNRDhMC9SjYFILrGJK3sP2p8bhtbeJz83rkkw9%2BuszwY6pgE%2FzlIOaEBBCLtzn6MCosGOgqprpfg%2FueCvxjPi4yD3dOxwl8nb9ucg6Hx19CXCNAhkstwgfPt%2BL14BbvaI3iXbS036z9QVKaB6se%2Ftr8Gvtvxxm2LaNpVJm49lrNTyeKPJ6cUjPbeFCuTZwL93Kfnz2M8O9uMQadQ1A7J9XsiV4Dy0aacEiej0wKrIKZWQpjFSMIkR1cZ75bvsv5acJQoRymEYC%2Fks&X-Amz-Signature=673b0b55477f427d07cfab7bbed7b802808949e0808ae78eb9a0ad031ab6f650&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663DS2XKZ6%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094411Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFUj%2BRZlnQT%2BIGws0PRWS3u4JEz77r7ww%2B%2F1DTudDdCJAiBqUk%2BdSuKM2SakktQosxMD7KmzNgui4woeLuTFCnv31ir%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIM16dKLMk%2FY57Gi6LKKtwDsSqaZ0H9HB0Ri8CYNkE9AMR00DhVWc21HTA7pGupmt%2FHLrtIYvbmaYBz2Jn%2Bkxxv2LsAoKiZMIQM2WTx9s5VxIYEfonPj%2BE5cYTjkW9KzU1v0cO2LvX0EBN5oW0V%2FlM77vH3TLWQem%2BETldyZyBdEeSRroCAajyKMrNu%2BKMs0%2FCffYSaLxdDa4BI43RQx8D7c3cg4CuYgDuIKYuCBRc484zL3t7fMP6BCZGGhrU%2BKpgO2ES9xRmCCCVvTb1LdGnZRhJLz9sKMjF%2FnGC05Cs%2F7Qkd9K57%2Fap8dr5JioSppBeZ7n0YcXBZDIl4gV48sikSTYRFudgLMuMyaARgd%2Fzkkqo0xgyXkOT7DvkpYv9kyid3btO77Go%2F1ZVGRIdkFKQRsHsSAzqAk9NfrCqB1V2mlWgLnbNQe%2F9jigY08Clmu1VyR68bHiV6bL%2FQG3Mr2MEssAhY6EtFJnUETsn08ZYPwChMAoMT6aagwBXWDlTibBvZNec1cWuD7PZu%2BX8fJcbNe9SKFmMDEmGw1AaNi2opix4LAE48j66VrLWoxZ%2FYtwn%2FtuqF9QxZseel6y1orhCnzOGE%2FGKEiZAH4JUoitag5MwtNRDhMC9SjYFILrGJK3sP2p8bhtbeJz83rkkw9%2BuszwY6pgE%2FzlIOaEBBCLtzn6MCosGOgqprpfg%2FueCvxjPi4yD3dOxwl8nb9ucg6Hx19CXCNAhkstwgfPt%2BL14BbvaI3iXbS036z9QVKaB6se%2Ftr8Gvtvxxm2LaNpVJm49lrNTyeKPJ6cUjPbeFCuTZwL93Kfnz2M8O9uMQadQ1A7J9XsiV4Dy0aacEiej0wKrIKZWQpjFSMIkR1cZ75bvsv5acJQoRymEYC%2Fks&X-Amz-Signature=9ab7a70e38cc0ddd1e46e43d354b18000492a910356668bf76b8bb45e48b422a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ULGOOEH7%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094412Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIA%2B9ulKfpv57Xt287JJ%2BSA8PL6sdWj8XHmq9EwXMeMZNAiBeyNKhPDVBDQNGYvMftDga7Co%2B0fvLVZJw%2FDCFP92TBCr%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIMYPO1cFX1DqmI36JxKtwDvuhDkqDuPpFTXbHD6exkt8GjngsXcWn0BkFK9HdPqcGIay%2FfuV3I5ctXmYe%2B%2BuEOfhIRFSrH2oIpyR6feCHsLo8mpVU1j4lXnR69R%2FF0VOQuYjvN23zaNYD04EkbCOlvPaQIVKkXkd3GCvlmQT2VaCzzxBQt%2BLKIQisxcyCdteasDBQH3YhYFk4n6G2Fv4iH6LZFRlrv0MSX5tKAdzmu8CYTScg%2FO4a%2FRfFnCAweYmIZWKNK8l8mpeasMZ1Y%2FZGmyhI2Bv8Rq%2FkOtyegrORlKRLB2MLA50NAEc1VFTopiAKohVd03GXXIAm6%2F9GLaCXEmPJbtksLlSDguReSnYOWhD4ABVgD12dU7oesBDBdQvV1gsvATAqmEM7C%2Bm4GoASks5bOSG3BhfblNc%2BkSkY%2BaZ3gyrcEvqIt5NK5UWNRFgrQx%2FRrG7MCh01O8XONSHNdVBR4ZgrysdPPkeFyQ8PN1pCIlQuGyWEwvo9F%2FdP1FhrCuZAQ1uLOSKZcUMhk%2FdCZqqfXlYvO0BR%2BdoNZ%2FLKgtYy7ZaG7suAhNF1Ok98JalYG1cqr4sRQ38tuteb751%2FOHsWHvUCS1nd5oRYliloWFOQPZIBtWZAxQGIE92aK0qvBX3CvtQzEEc4nU7Yw6%2BuszwY6pgFTejK6b45FSZEkFfdZAVj%2Fz%2F7DYJx0GqiI4bLJscrmXJ4wBV7f6ckM1pJUA5sDgOyj5N0s7dxYod%2FoZeGrVXn4ET9ma3LUkdupw9VG6t8Q7CO3YnLjsBidgklzY6tvOifGIUTfXFjpolHaMaWFMTFpj1iPMJ%2BrO%2B0i54J41onjg0QtSL1m6YfoawK9GW9B2MF2FzTeJI%2Blk3rPplXh9xc4dhisIZ2z&X-Amz-Signature=36cdcd4f9b024f6186f95f4ba86218c34b1190d07472cea8fdc873d404a1217d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBDL42UF%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094412Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBCsFB%2BB3BioeBPrzQPbxct52eZtmrY1nldLxenTb9gNAiAL7GBi9AbcH24rhElu%2F9pdjMZ0oQloAN9SWoKPfKiioyr%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIM3eaeKajoMeSWlxtxKtwDDOjhjg7tgs2b8Kdg64N7PQdM%2BIc2pjg45181bZwVXu8%2FrwBw3xD9WW5hSr6wYgf8BQUufzDZ%2BB5TicsMmxGiTB8bf47UzMja7olMbl8Pp0jtMKtX82SN2WSqzdwV9vhsObDwAQ6cNhrrWJfPibbOUzhuCJta4joBSP2WYFKiKdW6erCPCaYX66Hp60NDom6xsF3FicWF8iNUdBuN%2F%2F5PEWnB4gvF0lCoOo8Hk5cR75uCV7RB169Rn3sb1KrBKC9Tsp0XNKumSpeEGdtjhGVR9HnWMsjP6lOq8LC%2BXtaN7URC8jjkqLd7TK7eQA%2FoqMmBZBfkAL1YuBmKF2RB0vPW%2BbluPDUfkndtcOM%2B%2FYUPGkGNMMX2nPETKl5T1lwg4gmVquqY37k70zVw9JVR8r%2BP85CEawTHcj%2FLKA3YY40Y0GXfHxUTdjfnexq4wdPtkRgvUXVwG9uCcTcRaEDCCUf7w%2FCmEuZFtODbSVTn%2FgpM7yfiNSJcihfegBQvKL8OtG47ceHLUqGd2ZppgYTeq2tQh3Oqk4Zu0Tohe2V9xusYPx8tFoy5u5X5RwWdUVoBucBTHieSbx6%2Bl0%2FEDwL2WRYXZRVaDSxrZR1iN0YtFm8czR5u%2FqQZea5hezZR%2BMEwz%2BuszwY6pgG9avTMtcBG0c2B%2FVofgxaxDmYFXuV5pVw%2BY69iuqCFsw%2FI6XE0ev2ISmdHpD9rbxCEIpCeosM253tjdAlu2W%2FbMGbW0Sv2wtLlFfXByzN4EKdsV4qDEQ1RO79DEdC3rYgJQ9nL1EuN1UdUpJu8fZQ4fUvdLVBisbFB3eW2P5icLgp1fPi0WTzkmdaICQ2AyY%2BI6cfoh%2B79Pwmb4B5RPc9ZWMWCX2wf&X-Amz-Signature=ed015f17d85ee2e716f56d7e191caf48f8cb51e27563a29f36615cdf674efb25&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBDL42UF%2F20260424%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260424T094412Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBCsFB%2BB3BioeBPrzQPbxct52eZtmrY1nldLxenTb9gNAiAL7GBi9AbcH24rhElu%2F9pdjMZ0oQloAN9SWoKPfKiioyr%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIM3eaeKajoMeSWlxtxKtwDDOjhjg7tgs2b8Kdg64N7PQdM%2BIc2pjg45181bZwVXu8%2FrwBw3xD9WW5hSr6wYgf8BQUufzDZ%2BB5TicsMmxGiTB8bf47UzMja7olMbl8Pp0jtMKtX82SN2WSqzdwV9vhsObDwAQ6cNhrrWJfPibbOUzhuCJta4joBSP2WYFKiKdW6erCPCaYX66Hp60NDom6xsF3FicWF8iNUdBuN%2F%2F5PEWnB4gvF0lCoOo8Hk5cR75uCV7RB169Rn3sb1KrBKC9Tsp0XNKumSpeEGdtjhGVR9HnWMsjP6lOq8LC%2BXtaN7URC8jjkqLd7TK7eQA%2FoqMmBZBfkAL1YuBmKF2RB0vPW%2BbluPDUfkndtcOM%2B%2FYUPGkGNMMX2nPETKl5T1lwg4gmVquqY37k70zVw9JVR8r%2BP85CEawTHcj%2FLKA3YY40Y0GXfHxUTdjfnexq4wdPtkRgvUXVwG9uCcTcRaEDCCUf7w%2FCmEuZFtODbSVTn%2FgpM7yfiNSJcihfegBQvKL8OtG47ceHLUqGd2ZppgYTeq2tQh3Oqk4Zu0Tohe2V9xusYPx8tFoy5u5X5RwWdUVoBucBTHieSbx6%2Bl0%2FEDwL2WRYXZRVaDSxrZR1iN0YtFm8czR5u%2FqQZea5hezZR%2BMEwz%2BuszwY6pgG9avTMtcBG0c2B%2FVofgxaxDmYFXuV5pVw%2BY69iuqCFsw%2FI6XE0ev2ISmdHpD9rbxCEIpCeosM253tjdAlu2W%2FbMGbW0Sv2wtLlFfXByzN4EKdsV4qDEQ1RO79DEdC3rYgJQ9nL1EuN1UdUpJu8fZQ4fUvdLVBisbFB3eW2P5icLgp1fPi0WTzkmdaICQ2AyY%2BI6cfoh%2B79Pwmb4B5RPc9ZWMWCX2wf&X-Amz-Signature=ae0ffbabe7c330cac4ace03c5e71acd1784386c9cdddb18cd66021cad7f32866&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
