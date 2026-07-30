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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664TCCFTC2%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102308Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGMI9ZxVH5hFCrE7OyS7uWjNAQdxH2LQkZWC4cGD0eXdAiAgB4qHM2MAadsqdGGg6HbRF90qFwDF%2Fo2B56b%2BuSnorSqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMXFl%2B%2FzGe3mWAJ07VKtwDh0kwstMTsxBveVWmcVtDWvqZEym4qDP3CgUEglYfk8A55YhwlspPUnnJhmvuonFMP4zYMShM%2BrEK0h7%2FmTXlj%2Ba0VEyLSwd%2BByjtrGUZbFfiQqdwwUUqHyR1rs5bkEgjOoh1r4vj7GAYTFsQZQ1JMnhpe44rGK9sYpgkzqcJetfhS2gdKEjkyvCBrXmml0LbEP7ZHfw9OKbQtdGx5eoDDIASFyBZDqtV3x6LW25LeQOMgDa3NhdnGdh01rsXa%2F4UDiicbeaiLy%2BBzgjdzdC1xwspl1kRs%2FcP9qt%2BOIKSRP6vpyiP9ZdJ1sV4L%2F%2FZeAbXP5pgw1ARhM82xCj0ytMQkXS6zg9nEgr6KsbWSylAVRy0CgaWa%2FFe1irgM7Yct%2BX1UT9qddfg%2BWgdC6nK9PfX8awrhqWWeILItQvskLqq6DOi8LEVpKM69qmy%2Bgfu6TuW9elrphsQ8JXHDmJzeW9%2F9onCL4CkbjsMu37VhDjano2XDfWng9ZX4OqsNe0UOyVYwiq8ustJiJl5MeN0gHcIm8HG6RHvxVKv0exmeAmgZFSrZwE%2B9NFtw%2BTywVI56ses6mZpMeJM%2FAR5p97IAjmBvM4Nct45YErb71ezwJgNgr%2BbOYbvfRbL1aNa3Gcw6Kqs0wY6pgEGgK0lAyZhMGr%2BKZ%2BfL3pMwUVCN51gBvB2Vt6qEnqKtvbMUOs%2Flkur9NzmPH9%2FWvQ7RaQtHZwF6zLaq1w4AS5h3NHEvJLWjY%2BHpw97iGm4Ic%2FYD9pX118PHjQKd3mCzdnMfSMCICYhE8XYTjktsALHR1AigDhivrOLWYP9EK6czrBDpdK52dUQhusmiEQQFfzvwtNcVDPaL4iLbXSln%2FTOFecGDMDN&X-Amz-Signature=74a91d41f57eff10a230512f88007de4b34c8aab13e76f58b03448e8eeb60d36&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664TCCFTC2%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102308Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGMI9ZxVH5hFCrE7OyS7uWjNAQdxH2LQkZWC4cGD0eXdAiAgB4qHM2MAadsqdGGg6HbRF90qFwDF%2Fo2B56b%2BuSnorSqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMXFl%2B%2FzGe3mWAJ07VKtwDh0kwstMTsxBveVWmcVtDWvqZEym4qDP3CgUEglYfk8A55YhwlspPUnnJhmvuonFMP4zYMShM%2BrEK0h7%2FmTXlj%2Ba0VEyLSwd%2BByjtrGUZbFfiQqdwwUUqHyR1rs5bkEgjOoh1r4vj7GAYTFsQZQ1JMnhpe44rGK9sYpgkzqcJetfhS2gdKEjkyvCBrXmml0LbEP7ZHfw9OKbQtdGx5eoDDIASFyBZDqtV3x6LW25LeQOMgDa3NhdnGdh01rsXa%2F4UDiicbeaiLy%2BBzgjdzdC1xwspl1kRs%2FcP9qt%2BOIKSRP6vpyiP9ZdJ1sV4L%2F%2FZeAbXP5pgw1ARhM82xCj0ytMQkXS6zg9nEgr6KsbWSylAVRy0CgaWa%2FFe1irgM7Yct%2BX1UT9qddfg%2BWgdC6nK9PfX8awrhqWWeILItQvskLqq6DOi8LEVpKM69qmy%2Bgfu6TuW9elrphsQ8JXHDmJzeW9%2F9onCL4CkbjsMu37VhDjano2XDfWng9ZX4OqsNe0UOyVYwiq8ustJiJl5MeN0gHcIm8HG6RHvxVKv0exmeAmgZFSrZwE%2B9NFtw%2BTywVI56ses6mZpMeJM%2FAR5p97IAjmBvM4Nct45YErb71ezwJgNgr%2BbOYbvfRbL1aNa3Gcw6Kqs0wY6pgEGgK0lAyZhMGr%2BKZ%2BfL3pMwUVCN51gBvB2Vt6qEnqKtvbMUOs%2Flkur9NzmPH9%2FWvQ7RaQtHZwF6zLaq1w4AS5h3NHEvJLWjY%2BHpw97iGm4Ic%2FYD9pX118PHjQKd3mCzdnMfSMCICYhE8XYTjktsALHR1AigDhivrOLWYP9EK6czrBDpdK52dUQhusmiEQQFfzvwtNcVDPaL4iLbXSln%2FTOFecGDMDN&X-Amz-Signature=a562f650b0ec26f2ffea8d175879ff784d656be7f5d39c7b3f7b993327badd3b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664TCCFTC2%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102308Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGMI9ZxVH5hFCrE7OyS7uWjNAQdxH2LQkZWC4cGD0eXdAiAgB4qHM2MAadsqdGGg6HbRF90qFwDF%2Fo2B56b%2BuSnorSqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMXFl%2B%2FzGe3mWAJ07VKtwDh0kwstMTsxBveVWmcVtDWvqZEym4qDP3CgUEglYfk8A55YhwlspPUnnJhmvuonFMP4zYMShM%2BrEK0h7%2FmTXlj%2Ba0VEyLSwd%2BByjtrGUZbFfiQqdwwUUqHyR1rs5bkEgjOoh1r4vj7GAYTFsQZQ1JMnhpe44rGK9sYpgkzqcJetfhS2gdKEjkyvCBrXmml0LbEP7ZHfw9OKbQtdGx5eoDDIASFyBZDqtV3x6LW25LeQOMgDa3NhdnGdh01rsXa%2F4UDiicbeaiLy%2BBzgjdzdC1xwspl1kRs%2FcP9qt%2BOIKSRP6vpyiP9ZdJ1sV4L%2F%2FZeAbXP5pgw1ARhM82xCj0ytMQkXS6zg9nEgr6KsbWSylAVRy0CgaWa%2FFe1irgM7Yct%2BX1UT9qddfg%2BWgdC6nK9PfX8awrhqWWeILItQvskLqq6DOi8LEVpKM69qmy%2Bgfu6TuW9elrphsQ8JXHDmJzeW9%2F9onCL4CkbjsMu37VhDjano2XDfWng9ZX4OqsNe0UOyVYwiq8ustJiJl5MeN0gHcIm8HG6RHvxVKv0exmeAmgZFSrZwE%2B9NFtw%2BTywVI56ses6mZpMeJM%2FAR5p97IAjmBvM4Nct45YErb71ezwJgNgr%2BbOYbvfRbL1aNa3Gcw6Kqs0wY6pgEGgK0lAyZhMGr%2BKZ%2BfL3pMwUVCN51gBvB2Vt6qEnqKtvbMUOs%2Flkur9NzmPH9%2FWvQ7RaQtHZwF6zLaq1w4AS5h3NHEvJLWjY%2BHpw97iGm4Ic%2FYD9pX118PHjQKd3mCzdnMfSMCICYhE8XYTjktsALHR1AigDhivrOLWYP9EK6czrBDpdK52dUQhusmiEQQFfzvwtNcVDPaL4iLbXSln%2FTOFecGDMDN&X-Amz-Signature=d3e74d8efaa2918cb6c11899befef206f47d7c9843f410cffefec868523910e4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YYMBHAIY%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102310Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCqZhpsv%2B68sJBnRPcoeEsg6BDP0xyLOvOwi4Sd6a%2FpFgIgXT0jXa2tcWOd3J%2B4ZedGgTuHkxGKsMcfE%2Bvtuk3B%2FJMqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA4hRdQUbOIvCGEu9ircA8GwiY61Nt0iu%2Fuc%2BbLQSL%2FViDH0JNF8sSTkr%2Fn65lkIrFduyIKSsnBZt1ff882ReH4saV3%2BhbgN%2BSX8GV32%2FGqqrhhj3DWEIDf2jTuLnA7mJ1v5MctcznqYEslJd61cl2G8k%2FKzPL84Wt91kMNvzDucaIgrA0%2BJJfGaF%2FGQRcbnhq6mYLPFY0jXi%2F7IG08XAJgC93jqQ2yrQ7dZnY8osTr508%2FGY0pkLgqITzbfLjmQe5hJj%2B1whttVllRc7oqbrzWfTreLtyDwkAJwPlY45hVXJg5uKw6GkyYwJEXq48bNC%2FSZN02bWGdHxz3s0KKQHdO%2FYpIYcJIV%2BX%2F9%2F29ky3wOHCp%2FaVqIb7QL%2BKVj2lx7uThEQAUAElKNheg%2Fw77qhSk3JgU7AEBmWlvo8TitOXxEUPWKV1c3OCp5%2F0DUrpFaDgbJ1ckMNTNZrN3TqMsFYYW%2B8TSkijLUaHhfG5wsbH19pFUBCDMO7fPmECOFrzC5FOTT88q4%2FrwtYJKHyHi6LrwW94dra5bFb%2F1CwigVRGNZHY4qGDXuH4nY5Lqx4lTjLSbm96faRr01FDMxGCBPcZHAWW%2BQqs0Npz1xRrDmkQbI9lG3FJy1utlhAMqP56Wu3AmJvt%2B5xXJfaIbCMOCqrNMGOqUBjpo328H5jKZfOe6jpKqt16vZwPLSxcpCgYe55qERcLKGyIJyo5bDNI6xyuNCTHgCxtNzQ3dIwrYyA%2Bq0j%2F%2F9d2MXl9Y14INoSAKsjZ%2FvToS8QKZzT5C53Pp%2B4ylod0%2FQPRGZHUzaSv%2BDvfBwCU0Bp7%2FwJDEe4w03g3ybH3h6dCCTu4emVrcX8o5J%2FROv7KHndPrn61ESFS5YYrVKPFVNuKr1lWVq&X-Amz-Signature=28a1cfbc7ceecdcee7f4c8586c91d4f8ccfb89b74e53b587f6f16b9a20368f05&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YYMBHAIY%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102310Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCqZhpsv%2B68sJBnRPcoeEsg6BDP0xyLOvOwi4Sd6a%2FpFgIgXT0jXa2tcWOd3J%2B4ZedGgTuHkxGKsMcfE%2Bvtuk3B%2FJMqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA4hRdQUbOIvCGEu9ircA8GwiY61Nt0iu%2Fuc%2BbLQSL%2FViDH0JNF8sSTkr%2Fn65lkIrFduyIKSsnBZt1ff882ReH4saV3%2BhbgN%2BSX8GV32%2FGqqrhhj3DWEIDf2jTuLnA7mJ1v5MctcznqYEslJd61cl2G8k%2FKzPL84Wt91kMNvzDucaIgrA0%2BJJfGaF%2FGQRcbnhq6mYLPFY0jXi%2F7IG08XAJgC93jqQ2yrQ7dZnY8osTr508%2FGY0pkLgqITzbfLjmQe5hJj%2B1whttVllRc7oqbrzWfTreLtyDwkAJwPlY45hVXJg5uKw6GkyYwJEXq48bNC%2FSZN02bWGdHxz3s0KKQHdO%2FYpIYcJIV%2BX%2F9%2F29ky3wOHCp%2FaVqIb7QL%2BKVj2lx7uThEQAUAElKNheg%2Fw77qhSk3JgU7AEBmWlvo8TitOXxEUPWKV1c3OCp5%2F0DUrpFaDgbJ1ckMNTNZrN3TqMsFYYW%2B8TSkijLUaHhfG5wsbH19pFUBCDMO7fPmECOFrzC5FOTT88q4%2FrwtYJKHyHi6LrwW94dra5bFb%2F1CwigVRGNZHY4qGDXuH4nY5Lqx4lTjLSbm96faRr01FDMxGCBPcZHAWW%2BQqs0Npz1xRrDmkQbI9lG3FJy1utlhAMqP56Wu3AmJvt%2B5xXJfaIbCMOCqrNMGOqUBjpo328H5jKZfOe6jpKqt16vZwPLSxcpCgYe55qERcLKGyIJyo5bDNI6xyuNCTHgCxtNzQ3dIwrYyA%2Bq0j%2F%2F9d2MXl9Y14INoSAKsjZ%2FvToS8QKZzT5C53Pp%2B4ylod0%2FQPRGZHUzaSv%2BDvfBwCU0Bp7%2FwJDEe4w03g3ybH3h6dCCTu4emVrcX8o5J%2FROv7KHndPrn61ESFS5YYrVKPFVNuKr1lWVq&X-Amz-Signature=a66191d336195411afe85a80da3b24680ccd8b740c50cffbbbfbc25f0adcb55d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YYMBHAIY%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102310Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCqZhpsv%2B68sJBnRPcoeEsg6BDP0xyLOvOwi4Sd6a%2FpFgIgXT0jXa2tcWOd3J%2B4ZedGgTuHkxGKsMcfE%2Bvtuk3B%2FJMqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA4hRdQUbOIvCGEu9ircA8GwiY61Nt0iu%2Fuc%2BbLQSL%2FViDH0JNF8sSTkr%2Fn65lkIrFduyIKSsnBZt1ff882ReH4saV3%2BhbgN%2BSX8GV32%2FGqqrhhj3DWEIDf2jTuLnA7mJ1v5MctcznqYEslJd61cl2G8k%2FKzPL84Wt91kMNvzDucaIgrA0%2BJJfGaF%2FGQRcbnhq6mYLPFY0jXi%2F7IG08XAJgC93jqQ2yrQ7dZnY8osTr508%2FGY0pkLgqITzbfLjmQe5hJj%2B1whttVllRc7oqbrzWfTreLtyDwkAJwPlY45hVXJg5uKw6GkyYwJEXq48bNC%2FSZN02bWGdHxz3s0KKQHdO%2FYpIYcJIV%2BX%2F9%2F29ky3wOHCp%2FaVqIb7QL%2BKVj2lx7uThEQAUAElKNheg%2Fw77qhSk3JgU7AEBmWlvo8TitOXxEUPWKV1c3OCp5%2F0DUrpFaDgbJ1ckMNTNZrN3TqMsFYYW%2B8TSkijLUaHhfG5wsbH19pFUBCDMO7fPmECOFrzC5FOTT88q4%2FrwtYJKHyHi6LrwW94dra5bFb%2F1CwigVRGNZHY4qGDXuH4nY5Lqx4lTjLSbm96faRr01FDMxGCBPcZHAWW%2BQqs0Npz1xRrDmkQbI9lG3FJy1utlhAMqP56Wu3AmJvt%2B5xXJfaIbCMOCqrNMGOqUBjpo328H5jKZfOe6jpKqt16vZwPLSxcpCgYe55qERcLKGyIJyo5bDNI6xyuNCTHgCxtNzQ3dIwrYyA%2Bq0j%2F%2F9d2MXl9Y14INoSAKsjZ%2FvToS8QKZzT5C53Pp%2B4ylod0%2FQPRGZHUzaSv%2BDvfBwCU0Bp7%2FwJDEe4w03g3ybH3h6dCCTu4emVrcX8o5J%2FROv7KHndPrn61ESFS5YYrVKPFVNuKr1lWVq&X-Amz-Signature=c8b0741c830ae4c26d7548686a3b0769b8b0b3595356ef2e3fcf378487dc702d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YYMBHAIY%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102310Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCqZhpsv%2B68sJBnRPcoeEsg6BDP0xyLOvOwi4Sd6a%2FpFgIgXT0jXa2tcWOd3J%2B4ZedGgTuHkxGKsMcfE%2Bvtuk3B%2FJMqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA4hRdQUbOIvCGEu9ircA8GwiY61Nt0iu%2Fuc%2BbLQSL%2FViDH0JNF8sSTkr%2Fn65lkIrFduyIKSsnBZt1ff882ReH4saV3%2BhbgN%2BSX8GV32%2FGqqrhhj3DWEIDf2jTuLnA7mJ1v5MctcznqYEslJd61cl2G8k%2FKzPL84Wt91kMNvzDucaIgrA0%2BJJfGaF%2FGQRcbnhq6mYLPFY0jXi%2F7IG08XAJgC93jqQ2yrQ7dZnY8osTr508%2FGY0pkLgqITzbfLjmQe5hJj%2B1whttVllRc7oqbrzWfTreLtyDwkAJwPlY45hVXJg5uKw6GkyYwJEXq48bNC%2FSZN02bWGdHxz3s0KKQHdO%2FYpIYcJIV%2BX%2F9%2F29ky3wOHCp%2FaVqIb7QL%2BKVj2lx7uThEQAUAElKNheg%2Fw77qhSk3JgU7AEBmWlvo8TitOXxEUPWKV1c3OCp5%2F0DUrpFaDgbJ1ckMNTNZrN3TqMsFYYW%2B8TSkijLUaHhfG5wsbH19pFUBCDMO7fPmECOFrzC5FOTT88q4%2FrwtYJKHyHi6LrwW94dra5bFb%2F1CwigVRGNZHY4qGDXuH4nY5Lqx4lTjLSbm96faRr01FDMxGCBPcZHAWW%2BQqs0Npz1xRrDmkQbI9lG3FJy1utlhAMqP56Wu3AmJvt%2B5xXJfaIbCMOCqrNMGOqUBjpo328H5jKZfOe6jpKqt16vZwPLSxcpCgYe55qERcLKGyIJyo5bDNI6xyuNCTHgCxtNzQ3dIwrYyA%2Bq0j%2F%2F9d2MXl9Y14INoSAKsjZ%2FvToS8QKZzT5C53Pp%2B4ylod0%2FQPRGZHUzaSv%2BDvfBwCU0Bp7%2FwJDEe4w03g3ybH3h6dCCTu4emVrcX8o5J%2FROv7KHndPrn61ESFS5YYrVKPFVNuKr1lWVq&X-Amz-Signature=b58d95c66dd6f6e0c19d2d2f7ef6e4c8c34a20408b542c13852be0519a328858&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WKER4UEQ%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102310Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDalbsMPIxFzCIeN14A%2Fm981ES1QhtSN7bBpiS0C8wTRgIhAKPv61pKovToULtiu1kyGh757iCoWNSJoZzJVsObJcXaKogECJL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwV7Df1ZUs68WT9mo0q3AP%2F4YUBI1vNOH9smzulg4KUCHDukBOjN0eoXiUc6rWg6m%2Fag5hyKrO9RDSdGv3AliBK40sUcdGGGbW1NNWyda0saqXPTUI5aKZARK5P1jE7dPLedZv4KzZFDhNZxo%2BZBu34l6LdO9GyeXAM144lNleSZ0z08bGxi7qSHcDi%2F%2BkETr%2FOSjLR5%2Fh75LQ3mZ2BNfY5le5ztm63k1veuiCrbw5oErypMlZcaeyqS%2B%2FLHvX1B4R5ULCRAQQVvTtisDyG04jWVVWdta%2BS0%2B5A0oG2ulX63P56ZuE6RQdltNDhJ9fHsjEUQeJlU7PoXrSjHHfPQ%2Br0a70QM1QBdgnTI2a%2FqOU20emCrr31BUs4evRWkIWvLrrmY3ueXAJap95%2BmF1I5%2FlRiQwuhP2BcxuUAGAeKeh73xkL%2BBVjsYlhLEYWKcYFkBJrdoUQvJEFkeQurc8Xdc%2B0wib9s6929Z1n%2BQl3cOHlbeHFT6E9b7v4SUtBybLtWidUIilQx%2Bi6odLZ%2F4Cvbb2XNqP29ovqJIoL3KdF6PqN055g%2FUhUXtY27DG7UNxKwMt9nVKz1wb36%2BFGAQ5DkwW7U13G4iUrC18tgwnqm%2BpxOqLDTKOhDgzanpCfs6DaFrbgLBJust64Np9v9TC6qqzTBjqkAa2ZY6OiRtyaDsMl36%2FRGjqdx645G6X3cGFvS19oztZgF2TzkgTAdxEodbzSMqNxlVGwNnyXgAXolQeFgAItvdBZulA32MdLbKGEkEt13ZGP2D2g7K47SK%2FzVGHOi6Ub4pAeUiGRjw%2FGje8n9nnVPx%2FiL%2FqKVwMDQuIOxbGt1xqFEWcUG%2BL1uRb%2BcEeikbGPR8rC23yz7SEDOrYAaqp67iImd7ZN&X-Amz-Signature=8f7884633e9602a6ba977f8afc9b4b2decc3fd4bec4b61c5defd9427fe2ae03d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QQDVWXWY%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102311Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIF1e%2B4FfDnq8VFKvbH7IV0oMR3mLT07Qwlc2k862eS6qAiAVexWdjTYkfgsTRBf2FzYGCUjxrwV7sVwAxLTbSTVXkSqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMVcw6MTSctu41lG05KtwD5QvW%2Bd1b%2F8hbs4gMb5qyz1Th%2FrOg3CorLJma6H8q0d1J4LYAoUY4AdjT5QN5Q0%2Bn1mouGgIokEnsUhso7274Fjes%2B1nzgcW5DPRPE3JF8sIrfFnHr00FIkkg23dir1CC7iUS59bEhVI8fmS1JNhyZGuV3WgkK1b4DwO5I8GiEU6HXmaa%2Fdn%2By3Kfka32pdbNM0U8815yZn8Nyr%2B19L49R9fFV%2F%2BrdEc8AYHtw1aEGbHJxgatdNibmH4KYFPU2pOO63io8sJdOtD%2BQmOPvxmECNGOLaaVUvyFJgdTwXwXb7sgnzwY6Emjspjm78gpE5%2B913QB67CkPk2jb1MSgGdhF2uIbvgIwVwYAVVymwj7rpPgT8vj%2FkpRZQ4LAk%2BP0T5Orbt2o3ci%2FA8303U8Yxdx9HTHw5H%2BPv34s%2BlYAykcZe3kONaqc324eFbxxrH2HePQSPhKxn18aryqCWu9kowEcdc8hglYFLQvun3Yoamv0yFodtUpSIM9iQPI4650yAucVtsgEEpONAvq%2FN1ZqmV5en%2F8wit4U7r5mGN9W8lKE8IdHTG8sz1iT%2FGudQG8FYQYg5Iyiu32ntPeoLH5avXtHpDh8rcKcgR6%2BaYJgDSSJRAYt%2FLkE%2Fn%2FSioTXpgwpa2s0wY6pgHiqCuoZR0X2quhLM6Z4o%2Fc5i%2FlJ8bjnlv5pzCpywubgWFoZ1lEiQNDhoA2b07K6LlJoUL4wtDghWFc%2BHYet2QzLQ5M9BhL5ngzpz64Zg4AVt8AI3D1rz6gKo%2BLxDxK4jbct3BlDqDxjy5kzTmL0HzpPta%2ByxLsK2uO4I5dkIlqZH4pGY17yRJMwqdI2smhSBZDvsryS1HnlKFnDibiw6j6hOxcCUK3&X-Amz-Signature=38a731f7bc681d11e6a3460fec746de049ecffdb5486f2f34d6265adb8a261e8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QQDVWXWY%2F20260730%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260730T102311Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIF1e%2B4FfDnq8VFKvbH7IV0oMR3mLT07Qwlc2k862eS6qAiAVexWdjTYkfgsTRBf2FzYGCUjxrwV7sVwAxLTbSTVXkSqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMVcw6MTSctu41lG05KtwD5QvW%2Bd1b%2F8hbs4gMb5qyz1Th%2FrOg3CorLJma6H8q0d1J4LYAoUY4AdjT5QN5Q0%2Bn1mouGgIokEnsUhso7274Fjes%2B1nzgcW5DPRPE3JF8sIrfFnHr00FIkkg23dir1CC7iUS59bEhVI8fmS1JNhyZGuV3WgkK1b4DwO5I8GiEU6HXmaa%2Fdn%2By3Kfka32pdbNM0U8815yZn8Nyr%2B19L49R9fFV%2F%2BrdEc8AYHtw1aEGbHJxgatdNibmH4KYFPU2pOO63io8sJdOtD%2BQmOPvxmECNGOLaaVUvyFJgdTwXwXb7sgnzwY6Emjspjm78gpE5%2B913QB67CkPk2jb1MSgGdhF2uIbvgIwVwYAVVymwj7rpPgT8vj%2FkpRZQ4LAk%2BP0T5Orbt2o3ci%2FA8303U8Yxdx9HTHw5H%2BPv34s%2BlYAykcZe3kONaqc324eFbxxrH2HePQSPhKxn18aryqCWu9kowEcdc8hglYFLQvun3Yoamv0yFodtUpSIM9iQPI4650yAucVtsgEEpONAvq%2FN1ZqmV5en%2F8wit4U7r5mGN9W8lKE8IdHTG8sz1iT%2FGudQG8FYQYg5Iyiu32ntPeoLH5avXtHpDh8rcKcgR6%2BaYJgDSSJRAYt%2FLkE%2Fn%2FSioTXpgwpa2s0wY6pgHiqCuoZR0X2quhLM6Z4o%2Fc5i%2FlJ8bjnlv5pzCpywubgWFoZ1lEiQNDhoA2b07K6LlJoUL4wtDghWFc%2BHYet2QzLQ5M9BhL5ngzpz64Zg4AVt8AI3D1rz6gKo%2BLxDxK4jbct3BlDqDxjy5kzTmL0HzpPta%2ByxLsK2uO4I5dkIlqZH4pGY17yRJMwqdI2smhSBZDvsryS1HnlKFnDibiw6j6hOxcCUK3&X-Amz-Signature=332605c422da0b80192c46b5a95525a417724ae97a4b1ff554786894f3e30d7b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
