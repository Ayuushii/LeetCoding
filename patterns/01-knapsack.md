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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SXNA3ABF%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144054Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHrdISY2a2se%2FIcAtrqculk2nduVoi9a7w3rpRBNpxPkAiA1hzRjFRblN6z%2Fgq3m3QSPAmjaFUAq6ArPbly2XijUHSqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM76v0fwX1gvNhajX2KtwDBHPNqCvf1cGYbHP5zkuQz6%2FLM8dnzi5%2BMU%2FzHlIMWhXESfawPH%2FvCK4%2FAnH%2F6qcT3OUcA8RQcMoE%2FEEsdeHvj6d4wIv56lhMH3exVAuKCi5wBVbMczTC1hHzoxIOY8SWtcj%2FpXQggIZCt8cou69Ix9R1hlq0vxiHw2V2Ra7%2BL%2BMqYKKmdOgmLgm%2FKgbv%2FpLCITPts7%2BJNl%2BVu4qohXvkT8iaYbrQwKZQ76iSeua5psceSOoI17iuMSRykkWi8Az5E%2B885GvfhsW2agm%2BCqSqcYjcOR05mWZ0mqm21GuMWlMEoAAxQCE6jZoSMM2JM9JFeNX26zDWwS%2F9FQ%2FvJ3h5ct6yc9ggfsRuRcT%2FD0hRAKIX5VeBpw%2FCNYvYkvplFRerzyPF4aPGGj1debOhJdGA6iLFDWfJ5GBsRg4vg%2FhhGqKoMBXRMGyg3f27IRdzbQYml4pG6sK6Y5VkMtz2ciZFqf8tI%2BqlmxtR5EfHVaPXJ5aOGAoADc1E%2BZq7kkfIE2emsAqJzVSkpw%2F6WqcOvnutJKTANWRdVPwkQqjc9TQomO6kMyBm4%2Bj6h4EFdW74ok54UwAnrd%2FpSySgnwckD%2FQhz1pXPVZtYK%2FEoqKtXkmjBPt6vMGr7bp3zNv5BCgwy9u71wY6pgFMeOymH0P1ZTUc2JV67Y7PKGGhBO3klt%2F7mql6XAwmX%2FUfxlvh0fujEymOjBtQvgAQDToRe0WmQ7G4%2FqqvTYtfO41aT2W1tsMGRCA63jXylr7e8IrjBxm97%2FVIh3%2FC9KhRTdO31qvEoho5ug6rLoHCtOvTg8If5wN5DCKyD%2F7u2fYLzEm4NA7zzPFg7XQjVwDEEQMR1xa6tC9q1Zwn9Oz5N8%2BLRHQp&X-Amz-Signature=207e8875bddb41899d749cbcdbd5d1743d012d67c5e104ba435d47160449346d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SXNA3ABF%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144054Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHrdISY2a2se%2FIcAtrqculk2nduVoi9a7w3rpRBNpxPkAiA1hzRjFRblN6z%2Fgq3m3QSPAmjaFUAq6ArPbly2XijUHSqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM76v0fwX1gvNhajX2KtwDBHPNqCvf1cGYbHP5zkuQz6%2FLM8dnzi5%2BMU%2FzHlIMWhXESfawPH%2FvCK4%2FAnH%2F6qcT3OUcA8RQcMoE%2FEEsdeHvj6d4wIv56lhMH3exVAuKCi5wBVbMczTC1hHzoxIOY8SWtcj%2FpXQggIZCt8cou69Ix9R1hlq0vxiHw2V2Ra7%2BL%2BMqYKKmdOgmLgm%2FKgbv%2FpLCITPts7%2BJNl%2BVu4qohXvkT8iaYbrQwKZQ76iSeua5psceSOoI17iuMSRykkWi8Az5E%2B885GvfhsW2agm%2BCqSqcYjcOR05mWZ0mqm21GuMWlMEoAAxQCE6jZoSMM2JM9JFeNX26zDWwS%2F9FQ%2FvJ3h5ct6yc9ggfsRuRcT%2FD0hRAKIX5VeBpw%2FCNYvYkvplFRerzyPF4aPGGj1debOhJdGA6iLFDWfJ5GBsRg4vg%2FhhGqKoMBXRMGyg3f27IRdzbQYml4pG6sK6Y5VkMtz2ciZFqf8tI%2BqlmxtR5EfHVaPXJ5aOGAoADc1E%2BZq7kkfIE2emsAqJzVSkpw%2F6WqcOvnutJKTANWRdVPwkQqjc9TQomO6kMyBm4%2Bj6h4EFdW74ok54UwAnrd%2FpSySgnwckD%2FQhz1pXPVZtYK%2FEoqKtXkmjBPt6vMGr7bp3zNv5BCgwy9u71wY6pgFMeOymH0P1ZTUc2JV67Y7PKGGhBO3klt%2F7mql6XAwmX%2FUfxlvh0fujEymOjBtQvgAQDToRe0WmQ7G4%2FqqvTYtfO41aT2W1tsMGRCA63jXylr7e8IrjBxm97%2FVIh3%2FC9KhRTdO31qvEoho5ug6rLoHCtOvTg8If5wN5DCKyD%2F7u2fYLzEm4NA7zzPFg7XQjVwDEEQMR1xa6tC9q1Zwn9Oz5N8%2BLRHQp&X-Amz-Signature=dfdcf69065d3e5278ae4bc865e6e70ea5ddf94105f9b2ed82a2805025c834308&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SXNA3ABF%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144054Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHrdISY2a2se%2FIcAtrqculk2nduVoi9a7w3rpRBNpxPkAiA1hzRjFRblN6z%2Fgq3m3QSPAmjaFUAq6ArPbly2XijUHSqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM76v0fwX1gvNhajX2KtwDBHPNqCvf1cGYbHP5zkuQz6%2FLM8dnzi5%2BMU%2FzHlIMWhXESfawPH%2FvCK4%2FAnH%2F6qcT3OUcA8RQcMoE%2FEEsdeHvj6d4wIv56lhMH3exVAuKCi5wBVbMczTC1hHzoxIOY8SWtcj%2FpXQggIZCt8cou69Ix9R1hlq0vxiHw2V2Ra7%2BL%2BMqYKKmdOgmLgm%2FKgbv%2FpLCITPts7%2BJNl%2BVu4qohXvkT8iaYbrQwKZQ76iSeua5psceSOoI17iuMSRykkWi8Az5E%2B885GvfhsW2agm%2BCqSqcYjcOR05mWZ0mqm21GuMWlMEoAAxQCE6jZoSMM2JM9JFeNX26zDWwS%2F9FQ%2FvJ3h5ct6yc9ggfsRuRcT%2FD0hRAKIX5VeBpw%2FCNYvYkvplFRerzyPF4aPGGj1debOhJdGA6iLFDWfJ5GBsRg4vg%2FhhGqKoMBXRMGyg3f27IRdzbQYml4pG6sK6Y5VkMtz2ciZFqf8tI%2BqlmxtR5EfHVaPXJ5aOGAoADc1E%2BZq7kkfIE2emsAqJzVSkpw%2F6WqcOvnutJKTANWRdVPwkQqjc9TQomO6kMyBm4%2Bj6h4EFdW74ok54UwAnrd%2FpSySgnwckD%2FQhz1pXPVZtYK%2FEoqKtXkmjBPt6vMGr7bp3zNv5BCgwy9u71wY6pgFMeOymH0P1ZTUc2JV67Y7PKGGhBO3klt%2F7mql6XAwmX%2FUfxlvh0fujEymOjBtQvgAQDToRe0WmQ7G4%2FqqvTYtfO41aT2W1tsMGRCA63jXylr7e8IrjBxm97%2FVIh3%2FC9KhRTdO31qvEoho5ug6rLoHCtOvTg8If5wN5DCKyD%2F7u2fYLzEm4NA7zzPFg7XQjVwDEEQMR1xa6tC9q1Zwn9Oz5N8%2BLRHQp&X-Amz-Signature=f00e44c79b8f85f5af3dd0ef90ce6fbf25eb547bf9a452875b33afe059d48fc1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TZHBEOKS%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144054Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJIMEYCIQCzKhPfeQnEnPIGoNF7rUPirxJ6VXirsltINIiFGomTjwIhANPjPEKTPdv3QJJWb5A%2F8qluTug4FPsyLw0ScG4RpZ%2FQKogECPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzqPctU03JqhKJ5LDQq3AM2z%2Bh6Y1gKC3fAoN6Y2ZlpPImWjeEGeIzt5h3lvZfYuAQCvjoaSbv1sLvCNhTt%2BPcy1n35NnA%2BgvuAlwDqbLGL3XsH%2B%2B3ayrDUKJysEZos4mG9s8Fwa4Tkeg749V0jPXEAebhxNm7eLx5%2FPBLDDvOTHK0imRtL6BaAGUP1hmHYPCr8QtFsxRdRdgPquK3JaUj58fwUTXOOU8blrkZpH9Sh7%2BOWdXnBy%2Fk3wpk%2FXruyQ71MIOwzgH8yQOnTGdIpHq2rkAaiRK8%2BTtxbC3DgTwkdrAA7C4Xcrm78jYkB%2FHWi8H2ZVQsrWvdVdlN34UBdNld37Ar8kMz8t3JRFhmuJfYs0rd4VzPW8K63qQSIrN2DD8BseTJZelBSRIznizuoUCf7cAUr36ZQVpCVV7hC%2BVXNwTIV%2BKDOVOaKVTmYXWQTMmoyAJv%2F1EQWnfNhOF5KfktAVeFDRB1fhJ83eSMtE%2BrJoNk8DqOFG99hq6MJi7Pah5BUqymCpz0p0ABTytFiEWexbploeB44xIduQz%2Bh%2BTFedGjs3fEhg3H9z8wKeFDDoPrJjg7eTsZiU91dbYUoKiF9iacj%2B5S4rPXd9HX9jpN9yCwOFFEjs0bzMVvcNSPpWWPlhe9WxgtX28JE%2FjDa27vXBjqkAS93sSFgxvYfF%2FQ%2B3uYmZ%2FmGM%2Fo8wrY2ezjU42spEEkMW7ksbnAS4u%2FeM32jcowVSq3cS3g%2FP4EIeM1EsAIeHrxjtm%2Bp08nyZXIBV6m5%2FnRpgm073AETBc72Er5kNSWPVzi95c%2F6a2Kb6e0yXjl%2FcKXxkUBuEXp4MEVBDecWkW6nTSc3JZzSnzbCZiExiL%2Ffz5rqcCKo93UuOHGkn3Z0lDOqoR7k&X-Amz-Signature=d83a58678161291e422503e8339dd49561f1e953f169b4bd344143479932e376&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TZHBEOKS%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144054Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJIMEYCIQCzKhPfeQnEnPIGoNF7rUPirxJ6VXirsltINIiFGomTjwIhANPjPEKTPdv3QJJWb5A%2F8qluTug4FPsyLw0ScG4RpZ%2FQKogECPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzqPctU03JqhKJ5LDQq3AM2z%2Bh6Y1gKC3fAoN6Y2ZlpPImWjeEGeIzt5h3lvZfYuAQCvjoaSbv1sLvCNhTt%2BPcy1n35NnA%2BgvuAlwDqbLGL3XsH%2B%2B3ayrDUKJysEZos4mG9s8Fwa4Tkeg749V0jPXEAebhxNm7eLx5%2FPBLDDvOTHK0imRtL6BaAGUP1hmHYPCr8QtFsxRdRdgPquK3JaUj58fwUTXOOU8blrkZpH9Sh7%2BOWdXnBy%2Fk3wpk%2FXruyQ71MIOwzgH8yQOnTGdIpHq2rkAaiRK8%2BTtxbC3DgTwkdrAA7C4Xcrm78jYkB%2FHWi8H2ZVQsrWvdVdlN34UBdNld37Ar8kMz8t3JRFhmuJfYs0rd4VzPW8K63qQSIrN2DD8BseTJZelBSRIznizuoUCf7cAUr36ZQVpCVV7hC%2BVXNwTIV%2BKDOVOaKVTmYXWQTMmoyAJv%2F1EQWnfNhOF5KfktAVeFDRB1fhJ83eSMtE%2BrJoNk8DqOFG99hq6MJi7Pah5BUqymCpz0p0ABTytFiEWexbploeB44xIduQz%2Bh%2BTFedGjs3fEhg3H9z8wKeFDDoPrJjg7eTsZiU91dbYUoKiF9iacj%2B5S4rPXd9HX9jpN9yCwOFFEjs0bzMVvcNSPpWWPlhe9WxgtX28JE%2FjDa27vXBjqkAS93sSFgxvYfF%2FQ%2B3uYmZ%2FmGM%2Fo8wrY2ezjU42spEEkMW7ksbnAS4u%2FeM32jcowVSq3cS3g%2FP4EIeM1EsAIeHrxjtm%2Bp08nyZXIBV6m5%2FnRpgm073AETBc72Er5kNSWPVzi95c%2F6a2Kb6e0yXjl%2FcKXxkUBuEXp4MEVBDecWkW6nTSc3JZzSnzbCZiExiL%2Ffz5rqcCKo93UuOHGkn3Z0lDOqoR7k&X-Amz-Signature=9a80febb8c86441b8fd8a9f1c66014b7e4a771b611180d78a7c38c263d52a53d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TZHBEOKS%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144054Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJIMEYCIQCzKhPfeQnEnPIGoNF7rUPirxJ6VXirsltINIiFGomTjwIhANPjPEKTPdv3QJJWb5A%2F8qluTug4FPsyLw0ScG4RpZ%2FQKogECPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzqPctU03JqhKJ5LDQq3AM2z%2Bh6Y1gKC3fAoN6Y2ZlpPImWjeEGeIzt5h3lvZfYuAQCvjoaSbv1sLvCNhTt%2BPcy1n35NnA%2BgvuAlwDqbLGL3XsH%2B%2B3ayrDUKJysEZos4mG9s8Fwa4Tkeg749V0jPXEAebhxNm7eLx5%2FPBLDDvOTHK0imRtL6BaAGUP1hmHYPCr8QtFsxRdRdgPquK3JaUj58fwUTXOOU8blrkZpH9Sh7%2BOWdXnBy%2Fk3wpk%2FXruyQ71MIOwzgH8yQOnTGdIpHq2rkAaiRK8%2BTtxbC3DgTwkdrAA7C4Xcrm78jYkB%2FHWi8H2ZVQsrWvdVdlN34UBdNld37Ar8kMz8t3JRFhmuJfYs0rd4VzPW8K63qQSIrN2DD8BseTJZelBSRIznizuoUCf7cAUr36ZQVpCVV7hC%2BVXNwTIV%2BKDOVOaKVTmYXWQTMmoyAJv%2F1EQWnfNhOF5KfktAVeFDRB1fhJ83eSMtE%2BrJoNk8DqOFG99hq6MJi7Pah5BUqymCpz0p0ABTytFiEWexbploeB44xIduQz%2Bh%2BTFedGjs3fEhg3H9z8wKeFDDoPrJjg7eTsZiU91dbYUoKiF9iacj%2B5S4rPXd9HX9jpN9yCwOFFEjs0bzMVvcNSPpWWPlhe9WxgtX28JE%2FjDa27vXBjqkAS93sSFgxvYfF%2FQ%2B3uYmZ%2FmGM%2Fo8wrY2ezjU42spEEkMW7ksbnAS4u%2FeM32jcowVSq3cS3g%2FP4EIeM1EsAIeHrxjtm%2Bp08nyZXIBV6m5%2FnRpgm073AETBc72Er5kNSWPVzi95c%2F6a2Kb6e0yXjl%2FcKXxkUBuEXp4MEVBDecWkW6nTSc3JZzSnzbCZiExiL%2Ffz5rqcCKo93UuOHGkn3Z0lDOqoR7k&X-Amz-Signature=0a598b9ffcd554fc3ac00077771d92c04136d14c122b01ebd7262e43708e5003&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TZHBEOKS%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144054Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJIMEYCIQCzKhPfeQnEnPIGoNF7rUPirxJ6VXirsltINIiFGomTjwIhANPjPEKTPdv3QJJWb5A%2F8qluTug4FPsyLw0ScG4RpZ%2FQKogECPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzqPctU03JqhKJ5LDQq3AM2z%2Bh6Y1gKC3fAoN6Y2ZlpPImWjeEGeIzt5h3lvZfYuAQCvjoaSbv1sLvCNhTt%2BPcy1n35NnA%2BgvuAlwDqbLGL3XsH%2B%2B3ayrDUKJysEZos4mG9s8Fwa4Tkeg749V0jPXEAebhxNm7eLx5%2FPBLDDvOTHK0imRtL6BaAGUP1hmHYPCr8QtFsxRdRdgPquK3JaUj58fwUTXOOU8blrkZpH9Sh7%2BOWdXnBy%2Fk3wpk%2FXruyQ71MIOwzgH8yQOnTGdIpHq2rkAaiRK8%2BTtxbC3DgTwkdrAA7C4Xcrm78jYkB%2FHWi8H2ZVQsrWvdVdlN34UBdNld37Ar8kMz8t3JRFhmuJfYs0rd4VzPW8K63qQSIrN2DD8BseTJZelBSRIznizuoUCf7cAUr36ZQVpCVV7hC%2BVXNwTIV%2BKDOVOaKVTmYXWQTMmoyAJv%2F1EQWnfNhOF5KfktAVeFDRB1fhJ83eSMtE%2BrJoNk8DqOFG99hq6MJi7Pah5BUqymCpz0p0ABTytFiEWexbploeB44xIduQz%2Bh%2BTFedGjs3fEhg3H9z8wKeFDDoPrJjg7eTsZiU91dbYUoKiF9iacj%2B5S4rPXd9HX9jpN9yCwOFFEjs0bzMVvcNSPpWWPlhe9WxgtX28JE%2FjDa27vXBjqkAS93sSFgxvYfF%2FQ%2B3uYmZ%2FmGM%2Fo8wrY2ezjU42spEEkMW7ksbnAS4u%2FeM32jcowVSq3cS3g%2FP4EIeM1EsAIeHrxjtm%2Bp08nyZXIBV6m5%2FnRpgm073AETBc72Er5kNSWPVzi95c%2F6a2Kb6e0yXjl%2FcKXxkUBuEXp4MEVBDecWkW6nTSc3JZzSnzbCZiExiL%2Ffz5rqcCKo93UuOHGkn3Z0lDOqoR7k&X-Amz-Signature=99503e7606263b641b6e76aae9795032a13e1de32133eeab044c2d686d2c7982&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QMAOLFWM%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEC4aCXVzLXdlc3QtMiJGMEQCIHxHAq%2F9IxNens16ojKSnRtT31yhmraoHM5eYMYtqPFkAiAgv3rDWkWcsl7AJzA86XiySJfpxUHux5DVqdpk8nuRwCqIBAj2%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM7lsEFVwJSGamb6o6KtwDzAXhl%2FDeeUXwNQ9TmR7sa0AIPHwMdjEPz%2B0posGrCRooXvg4vyENphAM0noyR2BG1RXShf1TJK%2BeSzQWDTbDtJ6kNQZClcktukS5Ovnnk%2F%2Bb12acpKNVWMXuhPvxk6LTf%2FWVJaGgnfaop%2BirAcRMSo1Fq4dBLRdYxYMpi6CBdujrfKwQZCXIXMyg%2F4ruKxRrC05u%2FuUfGTAGxYCxvcO1Kg%2BLVTra7spLRqkSANvBfb9DaccDwp5pJPehQXOeqgl5XMvCM0RrqIEVdJ5zEoYWwJaWgNtqDKZcUSLwuIcJqKc7mOQ1ZlAmtPfOCKwiGsuVN58%2BsIr8Q6L4pN3SQMZodgDaE83DMhv7NCb8FYfUwSM80PjCdvuMEmZZwBiMlQSailonmg2m7cuJ60iIzFEF0rsgcA1GgWv1vftNbtAuPYhoiLuzil07W6rGIvVgJshsSR7EVhK%2FlWmRj46RwYmtpLIxEiJ94%2FnnsjJssIUM7qLTOv3kHuvjyElXlqycxDW3%2BQM5J4K96mJ6zOlpfeieJXgixvuS%2B7sfq%2BPKlN2k%2BMNSopdb9onT%2Fy76DgXtIB1kvtHXVs%2B2VOa%2FkWG%2F%2FMD5FDXy7rqnmlBg5U8qRo1FkP4JGwPBLGcWZIGaEIUwg8681wY6pgFyn16%2FR2GPZn6IaLwTNnwXiUiDtgjLEOUNnmZ%2FSaOZsfhSow0jAAHq30yeGOCvRGfbhMm%2Fe9MzIC7J8tLE18VNuOxx%2FAtAF%2FNCrcQNsriJRawK1rYmKacrxu7LEbWhD2K%2BBPYVLOawr3Mdh6PbP%2Bxm3VLHhbPEefys%2F%2F2q6z8rai3iyANobXJKFx32Peo%2BY2O7OuuPZufN0ojXl%2BdRQEQvi8ebMvco&X-Amz-Signature=da7d0d31562426d15dcd07842530d235dc2a05619e5f635cd9aa55c2425461df&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IAIAV2K%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJHMEUCIQCAanbN52BfvdITmGW%2B%2FTEnHgKgrZoktSvpy3sT2TzJcwIgX6q%2Bv0YGP0YgYZ5WuBjQ5Zx1T8rBGe7woMPWfbV3ahwqiAQI8v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFAzoF9xBUU40XhwIircA71sbLGDFJ1JFy5n1LawcpTPdj2f5jvb%2Bn9c9NqokeYkQ%2FJvxq3rHLaY1p%2FnF%2Fd8Xrz5enfW7uFBgYWDSAdQWDCQKNjfadWormbjAQS3PqJGnw3DO5ozvT1HksmAu1FCe4TBeaEaCfKmPmgCZPDvgPNdVGcYvjKFg6v32xd8PAv8YzdvlHYDnk8r6VEbA6GOgnaPiDzyk7RzJSF3CIuoOOWXEwn0m6wxkI%2F8yDJwaDD69%2B9eJbCNcVXU5u1ZrVleMefxwTSV2EhEoMVq%2Fk9GwzKbVpHDgLP2JxtA9YKuhHkq9QaYOAJ6JwchVjtPv80gzhenNLR12oRE%2FjyGGUkjhlSBBLXTIaKvxTSijQmgJRwo4qoRp%2BzdkgZycSwYZ2EOBeIvABzuMXSHz2bq5%2FT%2BlJKNSOtwZTS%2BujclLuO%2BO3natNVNqZJHYze6t6RohE6%2B42UetsSgg2aTRquq1wENtg1pyOL6ragmKd7Wii%2BNvVxnSACvHRTMTj4J8bJpnpD7iZhAe3%2FSqhMdet7uPhN59PoX4uICAK%2B6GLQC0oSaduWy8MJBCcd3%2Ba5vj%2F7cpyUJ4qpmNjgVWIIq2EV5gzni48mE2YbOYPVGFRRZCtbl%2Frg9wSqPiqsbuircpjMLMO%2Fdu9cGOqUByQIQqyjV7NUVq4aYucyMDAcuZZqi29CllOV9EbTUG%2Fe4vcqsblR5OrCDbIi6ViGC0SkUSoQxVmILtR%2BR4hTSU3TlSxGKI9rl3dfcJDzup%2BTKqymfwHqzh%2Fh3IKBH2oM0RiK4YGHTdwjQXDgvnPmgs3gMXJ7qfspm68BHSquPr5dqVHp%2BDi6m0C0JXNti7mysdX4g2HNHTaOr%2BlxEM7pZT8E0nNE2&X-Amz-Signature=19ade8148a8d807b2fa1424e97738d251be7ab97cb564c5dd35a170ea420776b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IAIAV2K%2F20261107%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261107T144055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJHMEUCIQCAanbN52BfvdITmGW%2B%2FTEnHgKgrZoktSvpy3sT2TzJcwIgX6q%2Bv0YGP0YgYZ5WuBjQ5Zx1T8rBGe7woMPWfbV3ahwqiAQI8v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFAzoF9xBUU40XhwIircA71sbLGDFJ1JFy5n1LawcpTPdj2f5jvb%2Bn9c9NqokeYkQ%2FJvxq3rHLaY1p%2FnF%2Fd8Xrz5enfW7uFBgYWDSAdQWDCQKNjfadWormbjAQS3PqJGnw3DO5ozvT1HksmAu1FCe4TBeaEaCfKmPmgCZPDvgPNdVGcYvjKFg6v32xd8PAv8YzdvlHYDnk8r6VEbA6GOgnaPiDzyk7RzJSF3CIuoOOWXEwn0m6wxkI%2F8yDJwaDD69%2B9eJbCNcVXU5u1ZrVleMefxwTSV2EhEoMVq%2Fk9GwzKbVpHDgLP2JxtA9YKuhHkq9QaYOAJ6JwchVjtPv80gzhenNLR12oRE%2FjyGGUkjhlSBBLXTIaKvxTSijQmgJRwo4qoRp%2BzdkgZycSwYZ2EOBeIvABzuMXSHz2bq5%2FT%2BlJKNSOtwZTS%2BujclLuO%2BO3natNVNqZJHYze6t6RohE6%2B42UetsSgg2aTRquq1wENtg1pyOL6ragmKd7Wii%2BNvVxnSACvHRTMTj4J8bJpnpD7iZhAe3%2FSqhMdet7uPhN59PoX4uICAK%2B6GLQC0oSaduWy8MJBCcd3%2Ba5vj%2F7cpyUJ4qpmNjgVWIIq2EV5gzni48mE2YbOYPVGFRRZCtbl%2Frg9wSqPiqsbuircpjMLMO%2Fdu9cGOqUByQIQqyjV7NUVq4aYucyMDAcuZZqi29CllOV9EbTUG%2Fe4vcqsblR5OrCDbIi6ViGC0SkUSoQxVmILtR%2BR4hTSU3TlSxGKI9rl3dfcJDzup%2BTKqymfwHqzh%2Fh3IKBH2oM0RiK4YGHTdwjQXDgvnPmgs3gMXJ7qfspm68BHSquPr5dqVHp%2BDi6m0C0JXNti7mysdX4g2HNHTaOr%2BlxEM7pZT8E0nNE2&X-Amz-Signature=8a294bbd06e57a0f1fba02f93a7012bdb5f73684e3ef1a28466b55faf8bc788f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
