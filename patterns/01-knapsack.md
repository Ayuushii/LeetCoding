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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WXM335OF%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105003Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJHMEUCIQCKinSkebTx3h4yg7xuO9aeAVTo9OlWCtbnvwy037pxrQIgNia2%2FoJhK2VA7%2FiA%2F1wq9LOruEuemNCGfbcKUfEkhIgq%2FwMIGxAAGgw2Mzc0MjMxODM4MDUiDEPJeUt12apP3P4XkyrcAwmFz7grMxBrnTuwQ29FjVPbpx6F4fbbpat%2FS39VoywRJCor5sxBcYZxrhrPhRFGVpwPQLMwT5rVJsFITAtKTB28pdmru6HmwxrRlVS46jrP2VeOV4aIButFPQ8n4UXZ5Br7ykwN2%2BlJmuvX52EWQvE6hgfJlFOOtnBvjyWjaiuuBgZ1Nvip%2FPfC%2B%2Bjilsi3e%2BEsd0hzJJL%2F4pBNtewvqZ9ODKw%2FOuaZqxFga03TwFdmhrgI6sCjYwXpJst8DYvy4NEygKjuzg04XD6FXiGDbeq53ij642%2B9cMfpecwR1U1oyWGhdpaKCAg4anQbJQZMzl%2Fw5iIteK8GtuBShdyuoiPf5N2rTTOl2rsUhZVL8jB%2B5Hlo%2BRgoxbnEwoRc%2BBGv7hGMhYSt4Nfkacs6K1%2BZjiR0%2B4%2FDbFL0zAXoazSuULHUfa%2Bb12H6q6z2DENl2csPbzLUGcuyP6aLtBYX1s849mt2%2FhdP7kbJ57g8SAyjkt4NakvxQXnuQuFwC%2BBUG6RoQy61cAvJBjMUErMigf6ZYhp50j32wL6TIuB8esuEs%2B08x7bQSgNvm8BonbNAiiutMjfNW4RHdJaPugvp02mc8HRISnA59g8sMuYjHduWzcZGJy6BCZ9uIsuf%2BfbkMIfUwNAGOqUBbKG6mhGhJ7Xcbz1iYL3nwSJLqt7lo0dosFzXCgAxDa0bx0O8ZPJlJNILp0jwdBTZySPMqD7RmefFNRZ3kmQcShubwZy%2F629LEdDqhk%2Bu%2BzE%2B6vY1pLbffbBa0DPT9d6bn%2FRKkBJ92osT8x9GlU%2FjnYCzFQjd5EBA5lT8zyfL%2FqIZoKdLX60qJ3NA5LOgJhBNiU1pSUkwnCg%2F9iwWNuBwW8FpcXbk&X-Amz-Signature=02bd4c3075f24bbfa1c6d60b849c56f6c22f674225371b613f280b80b2ee146e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WXM335OF%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105003Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJHMEUCIQCKinSkebTx3h4yg7xuO9aeAVTo9OlWCtbnvwy037pxrQIgNia2%2FoJhK2VA7%2FiA%2F1wq9LOruEuemNCGfbcKUfEkhIgq%2FwMIGxAAGgw2Mzc0MjMxODM4MDUiDEPJeUt12apP3P4XkyrcAwmFz7grMxBrnTuwQ29FjVPbpx6F4fbbpat%2FS39VoywRJCor5sxBcYZxrhrPhRFGVpwPQLMwT5rVJsFITAtKTB28pdmru6HmwxrRlVS46jrP2VeOV4aIButFPQ8n4UXZ5Br7ykwN2%2BlJmuvX52EWQvE6hgfJlFOOtnBvjyWjaiuuBgZ1Nvip%2FPfC%2B%2Bjilsi3e%2BEsd0hzJJL%2F4pBNtewvqZ9ODKw%2FOuaZqxFga03TwFdmhrgI6sCjYwXpJst8DYvy4NEygKjuzg04XD6FXiGDbeq53ij642%2B9cMfpecwR1U1oyWGhdpaKCAg4anQbJQZMzl%2Fw5iIteK8GtuBShdyuoiPf5N2rTTOl2rsUhZVL8jB%2B5Hlo%2BRgoxbnEwoRc%2BBGv7hGMhYSt4Nfkacs6K1%2BZjiR0%2B4%2FDbFL0zAXoazSuULHUfa%2Bb12H6q6z2DENl2csPbzLUGcuyP6aLtBYX1s849mt2%2FhdP7kbJ57g8SAyjkt4NakvxQXnuQuFwC%2BBUG6RoQy61cAvJBjMUErMigf6ZYhp50j32wL6TIuB8esuEs%2B08x7bQSgNvm8BonbNAiiutMjfNW4RHdJaPugvp02mc8HRISnA59g8sMuYjHduWzcZGJy6BCZ9uIsuf%2BfbkMIfUwNAGOqUBbKG6mhGhJ7Xcbz1iYL3nwSJLqt7lo0dosFzXCgAxDa0bx0O8ZPJlJNILp0jwdBTZySPMqD7RmefFNRZ3kmQcShubwZy%2F629LEdDqhk%2Bu%2BzE%2B6vY1pLbffbBa0DPT9d6bn%2FRKkBJ92osT8x9GlU%2FjnYCzFQjd5EBA5lT8zyfL%2FqIZoKdLX60qJ3NA5LOgJhBNiU1pSUkwnCg%2F9iwWNuBwW8FpcXbk&X-Amz-Signature=1103b9d806d6d4c88a46fb9dfc669dbf8ebfdd52a6f665d72e7563d0fc2e47b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WXM335OF%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105003Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJHMEUCIQCKinSkebTx3h4yg7xuO9aeAVTo9OlWCtbnvwy037pxrQIgNia2%2FoJhK2VA7%2FiA%2F1wq9LOruEuemNCGfbcKUfEkhIgq%2FwMIGxAAGgw2Mzc0MjMxODM4MDUiDEPJeUt12apP3P4XkyrcAwmFz7grMxBrnTuwQ29FjVPbpx6F4fbbpat%2FS39VoywRJCor5sxBcYZxrhrPhRFGVpwPQLMwT5rVJsFITAtKTB28pdmru6HmwxrRlVS46jrP2VeOV4aIButFPQ8n4UXZ5Br7ykwN2%2BlJmuvX52EWQvE6hgfJlFOOtnBvjyWjaiuuBgZ1Nvip%2FPfC%2B%2Bjilsi3e%2BEsd0hzJJL%2F4pBNtewvqZ9ODKw%2FOuaZqxFga03TwFdmhrgI6sCjYwXpJst8DYvy4NEygKjuzg04XD6FXiGDbeq53ij642%2B9cMfpecwR1U1oyWGhdpaKCAg4anQbJQZMzl%2Fw5iIteK8GtuBShdyuoiPf5N2rTTOl2rsUhZVL8jB%2B5Hlo%2BRgoxbnEwoRc%2BBGv7hGMhYSt4Nfkacs6K1%2BZjiR0%2B4%2FDbFL0zAXoazSuULHUfa%2Bb12H6q6z2DENl2csPbzLUGcuyP6aLtBYX1s849mt2%2FhdP7kbJ57g8SAyjkt4NakvxQXnuQuFwC%2BBUG6RoQy61cAvJBjMUErMigf6ZYhp50j32wL6TIuB8esuEs%2B08x7bQSgNvm8BonbNAiiutMjfNW4RHdJaPugvp02mc8HRISnA59g8sMuYjHduWzcZGJy6BCZ9uIsuf%2BfbkMIfUwNAGOqUBbKG6mhGhJ7Xcbz1iYL3nwSJLqt7lo0dosFzXCgAxDa0bx0O8ZPJlJNILp0jwdBTZySPMqD7RmefFNRZ3kmQcShubwZy%2F629LEdDqhk%2Bu%2BzE%2B6vY1pLbffbBa0DPT9d6bn%2FRKkBJ92osT8x9GlU%2FjnYCzFQjd5EBA5lT8zyfL%2FqIZoKdLX60qJ3NA5LOgJhBNiU1pSUkwnCg%2F9iwWNuBwW8FpcXbk&X-Amz-Signature=90bfa6958a7b2dfb473abff5086a0e07194d4c92b5a2b0d7b5d5af639390cd1a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UUHC53RF%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJGMEQCID8JIcIN4Fh7RDWzXx1pGZC5Ci1AvOkDvfyTnirg%2BSVUAiAVNQ0bltS6SW0dElDqeG2xG2P4qrwek2TtaQ0h8XE4KSr%2FAwgbEAAaDDYzNzQyMzE4MzgwNSIMh59MR3E2qyh1r4HPKtwDsG9Iob5m2s9d8kMxIMqvQDOCZzwQgshArLFiWdxOB%2BE4MPTgD7HAokvqRKwjn8EmPS0xT3E08ipxh9kX4y3CmYPpTooxZsZASwxO%2FyRuEXXjYgsArA0mbnCOgN%2BTpgmbfaQSHmMD69wnxTX41xLTE%2Bu4v8otOFMmV0OAjLhgWDZpyVgjCO0tibtWCwNF7y8UXf4BUVPmyFvMZSgUU0mbeZakabNhBRMzMWJ8cPVHAUgV0uB4JPCoaMwpXcuaD34MnGyszFb2ngmRj%2ByVYAnjsPl7tv97CFnPMCnR0kyTkg7JKKFSCVpBQ9CRwu3d%2FP9JwNqluHeYEk47%2F56MJLdl0cPRwmpmDyrYZNBXg08aMekw1GuDP5SJ8aHJx%2Br2Z8cTmgmYjCfuG%2FCiN40cJHDTVceq8fjUre9PRPb%2F3nebjHezmRVDQgDHkKELepgsDb5OI29sMo0aQZ0%2B1VcPeCyLvbt%2Fygg3W%2FyQsZdlIW92U%2FaQ6JfhFEfR9bUFcXmkuogmy0jZZlopDycACEe2OYNThvsEVVchiabkrOLYtMauOn8y3UaUvgvjeu7%2F0rNV5nS%2BsGH5jRaGyLpuBS%2B%2BKMAQIcsFOIfQ4jix093Ai%2Bl9wo61sb5cTkuUYb322b8wg9bA0AY6pgEhmK3Su44ma7oPOx0boQy9KZ6azJyzTjyLLqS6OODSr4tp9wuNglEVu0bVQscn2Q5P%2BhSq5aJOUkKhuzU3PHfx%2BDKtb8LTDvEhg8vcdLtn5R9SRyrZtvdKHNM8iB3C8FerWbMfVx5WYDXH2iNa4sRO1U5dS5yIlDxE5vMjCvb6gs459SDtef1HDZbKN5526%2Fk9xeDWGKYfROCGZNN6yvnu2oi9GrMg&X-Amz-Signature=4d70e5014f422a6555bcba069c16f5fed3e0f566fd82f4478d8d52d2a563e1b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UUHC53RF%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJGMEQCID8JIcIN4Fh7RDWzXx1pGZC5Ci1AvOkDvfyTnirg%2BSVUAiAVNQ0bltS6SW0dElDqeG2xG2P4qrwek2TtaQ0h8XE4KSr%2FAwgbEAAaDDYzNzQyMzE4MzgwNSIMh59MR3E2qyh1r4HPKtwDsG9Iob5m2s9d8kMxIMqvQDOCZzwQgshArLFiWdxOB%2BE4MPTgD7HAokvqRKwjn8EmPS0xT3E08ipxh9kX4y3CmYPpTooxZsZASwxO%2FyRuEXXjYgsArA0mbnCOgN%2BTpgmbfaQSHmMD69wnxTX41xLTE%2Bu4v8otOFMmV0OAjLhgWDZpyVgjCO0tibtWCwNF7y8UXf4BUVPmyFvMZSgUU0mbeZakabNhBRMzMWJ8cPVHAUgV0uB4JPCoaMwpXcuaD34MnGyszFb2ngmRj%2ByVYAnjsPl7tv97CFnPMCnR0kyTkg7JKKFSCVpBQ9CRwu3d%2FP9JwNqluHeYEk47%2F56MJLdl0cPRwmpmDyrYZNBXg08aMekw1GuDP5SJ8aHJx%2Br2Z8cTmgmYjCfuG%2FCiN40cJHDTVceq8fjUre9PRPb%2F3nebjHezmRVDQgDHkKELepgsDb5OI29sMo0aQZ0%2B1VcPeCyLvbt%2Fygg3W%2FyQsZdlIW92U%2FaQ6JfhFEfR9bUFcXmkuogmy0jZZlopDycACEe2OYNThvsEVVchiabkrOLYtMauOn8y3UaUvgvjeu7%2F0rNV5nS%2BsGH5jRaGyLpuBS%2B%2BKMAQIcsFOIfQ4jix093Ai%2Bl9wo61sb5cTkuUYb322b8wg9bA0AY6pgEhmK3Su44ma7oPOx0boQy9KZ6azJyzTjyLLqS6OODSr4tp9wuNglEVu0bVQscn2Q5P%2BhSq5aJOUkKhuzU3PHfx%2BDKtb8LTDvEhg8vcdLtn5R9SRyrZtvdKHNM8iB3C8FerWbMfVx5WYDXH2iNa4sRO1U5dS5yIlDxE5vMjCvb6gs459SDtef1HDZbKN5526%2Fk9xeDWGKYfROCGZNN6yvnu2oi9GrMg&X-Amz-Signature=5517818d6fd2daf850ce6a758aecea121ee89b409d5d78e73ffd567dc17d42e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UUHC53RF%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJGMEQCID8JIcIN4Fh7RDWzXx1pGZC5Ci1AvOkDvfyTnirg%2BSVUAiAVNQ0bltS6SW0dElDqeG2xG2P4qrwek2TtaQ0h8XE4KSr%2FAwgbEAAaDDYzNzQyMzE4MzgwNSIMh59MR3E2qyh1r4HPKtwDsG9Iob5m2s9d8kMxIMqvQDOCZzwQgshArLFiWdxOB%2BE4MPTgD7HAokvqRKwjn8EmPS0xT3E08ipxh9kX4y3CmYPpTooxZsZASwxO%2FyRuEXXjYgsArA0mbnCOgN%2BTpgmbfaQSHmMD69wnxTX41xLTE%2Bu4v8otOFMmV0OAjLhgWDZpyVgjCO0tibtWCwNF7y8UXf4BUVPmyFvMZSgUU0mbeZakabNhBRMzMWJ8cPVHAUgV0uB4JPCoaMwpXcuaD34MnGyszFb2ngmRj%2ByVYAnjsPl7tv97CFnPMCnR0kyTkg7JKKFSCVpBQ9CRwu3d%2FP9JwNqluHeYEk47%2F56MJLdl0cPRwmpmDyrYZNBXg08aMekw1GuDP5SJ8aHJx%2Br2Z8cTmgmYjCfuG%2FCiN40cJHDTVceq8fjUre9PRPb%2F3nebjHezmRVDQgDHkKELepgsDb5OI29sMo0aQZ0%2B1VcPeCyLvbt%2Fygg3W%2FyQsZdlIW92U%2FaQ6JfhFEfR9bUFcXmkuogmy0jZZlopDycACEe2OYNThvsEVVchiabkrOLYtMauOn8y3UaUvgvjeu7%2F0rNV5nS%2BsGH5jRaGyLpuBS%2B%2BKMAQIcsFOIfQ4jix093Ai%2Bl9wo61sb5cTkuUYb322b8wg9bA0AY6pgEhmK3Su44ma7oPOx0boQy9KZ6azJyzTjyLLqS6OODSr4tp9wuNglEVu0bVQscn2Q5P%2BhSq5aJOUkKhuzU3PHfx%2BDKtb8LTDvEhg8vcdLtn5R9SRyrZtvdKHNM8iB3C8FerWbMfVx5WYDXH2iNa4sRO1U5dS5yIlDxE5vMjCvb6gs459SDtef1HDZbKN5526%2Fk9xeDWGKYfROCGZNN6yvnu2oi9GrMg&X-Amz-Signature=c8a2e29d677992d84304d86151ee25a2bfd45d6321683014790f5e1eccc06ee9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UUHC53RF%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJGMEQCID8JIcIN4Fh7RDWzXx1pGZC5Ci1AvOkDvfyTnirg%2BSVUAiAVNQ0bltS6SW0dElDqeG2xG2P4qrwek2TtaQ0h8XE4KSr%2FAwgbEAAaDDYzNzQyMzE4MzgwNSIMh59MR3E2qyh1r4HPKtwDsG9Iob5m2s9d8kMxIMqvQDOCZzwQgshArLFiWdxOB%2BE4MPTgD7HAokvqRKwjn8EmPS0xT3E08ipxh9kX4y3CmYPpTooxZsZASwxO%2FyRuEXXjYgsArA0mbnCOgN%2BTpgmbfaQSHmMD69wnxTX41xLTE%2Bu4v8otOFMmV0OAjLhgWDZpyVgjCO0tibtWCwNF7y8UXf4BUVPmyFvMZSgUU0mbeZakabNhBRMzMWJ8cPVHAUgV0uB4JPCoaMwpXcuaD34MnGyszFb2ngmRj%2ByVYAnjsPl7tv97CFnPMCnR0kyTkg7JKKFSCVpBQ9CRwu3d%2FP9JwNqluHeYEk47%2F56MJLdl0cPRwmpmDyrYZNBXg08aMekw1GuDP5SJ8aHJx%2Br2Z8cTmgmYjCfuG%2FCiN40cJHDTVceq8fjUre9PRPb%2F3nebjHezmRVDQgDHkKELepgsDb5OI29sMo0aQZ0%2B1VcPeCyLvbt%2Fygg3W%2FyQsZdlIW92U%2FaQ6JfhFEfR9bUFcXmkuogmy0jZZlopDycACEe2OYNThvsEVVchiabkrOLYtMauOn8y3UaUvgvjeu7%2F0rNV5nS%2BsGH5jRaGyLpuBS%2B%2BKMAQIcsFOIfQ4jix093Ai%2Bl9wo61sb5cTkuUYb322b8wg9bA0AY6pgEhmK3Su44ma7oPOx0boQy9KZ6azJyzTjyLLqS6OODSr4tp9wuNglEVu0bVQscn2Q5P%2BhSq5aJOUkKhuzU3PHfx%2BDKtb8LTDvEhg8vcdLtn5R9SRyrZtvdKHNM8iB3C8FerWbMfVx5WYDXH2iNa4sRO1U5dS5yIlDxE5vMjCvb6gs459SDtef1HDZbKN5526%2Fk9xeDWGKYfROCGZNN6yvnu2oi9GrMg&X-Amz-Signature=df831801106653e1d391a5bdc43ed954948ef783902fc565172d5f2707b007e2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RFZOFIUO%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJGMEQCIEkgqfFHVXXPCYBNcgngUHyvnpzk4uVuATMlIZe0svqTAiBimMFU9o%2BkvUUZj5LKLSbtC%2BWXKjBZb0UsycJT5a8fGyr%2FAwgbEAAaDDYzNzQyMzE4MzgwNSIMkYwwZ4nJBZsEtwRgKtwD48khzQxKJ8Gk8u6pQ6PGrwMH8qY17tnNJXC9Q%2FyyD0rr6lvw08QLCN5%2Fpd2fnvcLgmDn8mN9R3rFIgY4jYSXMVrNG6UQkdYBaDpxI4YzZdncqfEi2eocO1Xfr7uST4lkC%2BjblqR63ISpPPJVZO3FZ3vFMQt54wnuMt2cekmAmU5Om%2ByPnNEUXI4fSrE3r2CjKa4NO8Ur28sOEGFHqjMPVWhi1agsV4H8%2BbzS8V5Qw1iKWU6ovjhaUuQzQmsnUOxYxsrDqJPtbLhXk61nuHEcpzGhpEuKuvJ1EjmeGrEL7Eb8NMTjceNBQG%2BF5qqI2cc8Rq%2F9iSrwCP6tz4VslBKoABONJmvzfW%2BqP5U1f0YrQ7wdw67AA2nJM2VXJmounKkjh5wqr%2FNUgqJ1KZ%2BK6%2FC75O4tCImW7EnLCY6mUMpHVd614tchFNaCQ4Gajmrqcd1lwfbfDWbkl%2F8OqTxp5S2Kg4v5sjHDyKFMdy9Dvm5hSBk7WxKMC25cssUBasbqLFq9eqFKf1Uh8kebsSohs2Zh6v1qYexhctyzEWemBim7dAmwVrRRibZ8%2FuJ%2FIKRRHaKA1IkHglFUDKqhmL0vWneCRuvT8qipNmjRWuO6jskjd3Us2YWSGdLu1Yu1LDUwxtTA0AY6pgF0P4%2FVmbJ3SDU260lQfY3pbmfPwbZ5e%2Bw7z%2B1iWm%2BrDN3D0OW4uAAaqCSGmlISX7t%2F1ZJxvKFA7KQKglWN5ryWGAe%2BcR8j9v96%2Fjb3VVolCmFF%2BLpAPdL5NtdXNehx0nY0yhe3ZeTG8g1BZ9KIPqn8pjnqUxbSoJVc0re%2BZxy8DYmdBdppEupr7H%2FxvIfibr%2FrM%2FoW4n9RVpWAoAs4eVvlLWBcyecc&X-Amz-Signature=488d5d0b70bc939d983a9155485f60e15714daf1809deada56ed39cf29610a0b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUACCBSF%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJHMEUCIQDvog%2Fpn0KA7twSzaL%2BL%2B%2B%2BdnItQvHpwUiBktosN%2FwajwIgIPpmhLnu8B686147vBJhRiVvcxeUmXheJIlrVdviESUq%2FwMIGxAAGgw2Mzc0MjMxODM4MDUiDCZ16oS5ehdlBaoBbCrcAwbyMcEByozP0sTsXsgtDMbmpvXSZL0ikyvSxf2amE0scf%2FhlNGelpp0n9v1ah7nGWGvs1V9IVyrFrsOixnshptnF8ERaNt6QX2NxyrA4hwjs7OSxnd4O6bl4greRoruffm5JfSgfwJYqDDkWdtxJcT3frzqzOgPKQJGXUomE0Zrmstedipu7new09yKwATwp36iFmn7r4PxbhLOX7C0sWO2M1j0jwrFwN03FKPheNT0PnhM7fkq6MVVLkWMOwQEaHmnlvslyjaPhxS%2F58eVSdfmnWbzvSj3SjEFKEvvx4eWCwLTohSlfmtY9bz1Y5jZvTGynSEwD4m%2BNlKMhXz1%2BLCxF%2BdyeQTLrHPfpD%2BnoEgiq3nY%2BD%2BtW8XTw%2F4akHDKxJJ9gtIAyL5P7pVlYtfmlUoR%2FYr6sa2ehHFeZ7BWoNUdRDYYFOmh8Mmk5E7mWmVG6wqOjEyFdQ5%2BA44MuM9N6zRKk797bplnz6KF51C9ZEVAMH%2BX45b9cKpxkB4wT1Cx6mu%2FQr%2FDtUqBYpv0SeOOUL%2FgWKKa0KNE1a55GO3yUXWdYJy6OBE8IhvDIWsdTrhrc90R4BmhwBLP7YwfP%2BEl6BywxhwxiK7E7ozGq9OWKHJJdetpHfJ0T02SFbVlMOvUwNAGOqUBcEp%2FHULs4Vaka5RgIPwpoLDT8A%2BdSegBWpWKfK86Aef3dTA0DIcnmYCKJXVdf4NE9XWtY7BHnYjTg1IoMjLfnRnk7WZh2w2ONj5Y1utlORg5uOe9ccR2ypCfI59BSONmFpU05CJ0XIl660MSqQvw3JTb1OBfqNKhW9WIC%2F8f8%2BYOmYLd9va1xgtA4aGrTYml1YoQtjU2KIsOkuEkIsPw%2FSnS4wpw&X-Amz-Signature=b6760796c7f1f855c31f176d51783097bee7e486b3c444085cd1771df9f99de4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUACCBSF%2F20260522%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260522T105007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFIaCXVzLXdlc3QtMiJHMEUCIQDvog%2Fpn0KA7twSzaL%2BL%2B%2B%2BdnItQvHpwUiBktosN%2FwajwIgIPpmhLnu8B686147vBJhRiVvcxeUmXheJIlrVdviESUq%2FwMIGxAAGgw2Mzc0MjMxODM4MDUiDCZ16oS5ehdlBaoBbCrcAwbyMcEByozP0sTsXsgtDMbmpvXSZL0ikyvSxf2amE0scf%2FhlNGelpp0n9v1ah7nGWGvs1V9IVyrFrsOixnshptnF8ERaNt6QX2NxyrA4hwjs7OSxnd4O6bl4greRoruffm5JfSgfwJYqDDkWdtxJcT3frzqzOgPKQJGXUomE0Zrmstedipu7new09yKwATwp36iFmn7r4PxbhLOX7C0sWO2M1j0jwrFwN03FKPheNT0PnhM7fkq6MVVLkWMOwQEaHmnlvslyjaPhxS%2F58eVSdfmnWbzvSj3SjEFKEvvx4eWCwLTohSlfmtY9bz1Y5jZvTGynSEwD4m%2BNlKMhXz1%2BLCxF%2BdyeQTLrHPfpD%2BnoEgiq3nY%2BD%2BtW8XTw%2F4akHDKxJJ9gtIAyL5P7pVlYtfmlUoR%2FYr6sa2ehHFeZ7BWoNUdRDYYFOmh8Mmk5E7mWmVG6wqOjEyFdQ5%2BA44MuM9N6zRKk797bplnz6KF51C9ZEVAMH%2BX45b9cKpxkB4wT1Cx6mu%2FQr%2FDtUqBYpv0SeOOUL%2FgWKKa0KNE1a55GO3yUXWdYJy6OBE8IhvDIWsdTrhrc90R4BmhwBLP7YwfP%2BEl6BywxhwxiK7E7ozGq9OWKHJJdetpHfJ0T02SFbVlMOvUwNAGOqUBcEp%2FHULs4Vaka5RgIPwpoLDT8A%2BdSegBWpWKfK86Aef3dTA0DIcnmYCKJXVdf4NE9XWtY7BHnYjTg1IoMjLfnRnk7WZh2w2ONj5Y1utlORg5uOe9ccR2ypCfI59BSONmFpU05CJ0XIl660MSqQvw3JTb1OBfqNKhW9WIC%2F8f8%2BYOmYLd9va1xgtA4aGrTYml1YoQtjU2KIsOkuEkIsPw%2FSnS4wpw&X-Amz-Signature=7d919ec7b85803646a96864bc044fc47196b2b27b185e60627e7336acaed4653&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
