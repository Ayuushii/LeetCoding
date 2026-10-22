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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SYQUOR3T%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132800Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPUh3YYZYeMuBYwG6qGdWwg1Bdte2Vzdu5zAbsAE8k1QIgNy1MYtG4GJmn87n4A3VcMp7xUBidZORpUGa9IHWmOasq%2FwMIdRAAGgw2Mzc0MjMxODM4MDUiDFET8OSURwD5x80umCrcA1gUFMfYbbY1rcWPCksRf5ahP4KNWvGq7%2FIziezv2utayscLOtTF6m1GUQPR%2F38oO8MEeiTJTJahGDkWgfIsbCpGrFj1XUZ2gsO0LH%2FOUUPkdbcFnEERP9E2e0audh5n3mw8UJXMpxCYwAk7IlR5TkYaxPk4VtToDnx3bU3F6KF3GJsv7pKGgZnUFCmaLyr%2FtDhyST43LAu1u%2Fl1h79Hug45T0XF9wxXo2LbUthZw4gcJ2fi56%2FlqCk2Dv0eIZ0GOlGUTV07zggAgGHFrWI96GxeeOY7RijoxjmH3mfZZ%2BZqLC8tIIzrb7B1ShMqzQw1DLBSKxjpxfc39hvQJlprezZi9JresvUeB%2BN36z7IZMW0h%2BqHBox5%2B97mV4fLE4G2wdnT2pj7NQF2gO1T7CJFoB0K7hrsi4xrbaPaPr2WDGkFjPDNxVyrUevlu1iVVqGClzduKXaIWXOiVZsHModCvLFvCnf3M8454Az%2FdbS1FCyMy2G1ANxqwQ93TjvIMXjYxCGDUsFPg%2FouwABHi8BOVJeabQCCbQ8GEpl8Iqger7w00ONZOGLjSm03t261q7eVYBIY081GC90V6Fcfhd9T7h8edA2AOt9pWrrVHy4obwJh3V%2FFTq6UksfT3EHCMLSD6NYGOqUB%2BuH%2BIrRKwQbD%2FRLXZdG0SwGsrk4W5dA0lRm04eR%2BVWSsiyoKZjzZbbtJms7AKbvo4BQZ348Qdrq2b9Orlgb7cdmllihDOZG%2FFjyihw5rV2ppg2mKaBQTK%2FnlYvlS9lVe%2BC4jIbPaHSoGVpj2GJ%2B%2F7ylpW56ZUIX0NrIFW2Yoro%2BR%2F434N8UJbiuVCQQDJphGbzrIZd3ZFSWh8XaQX3JlRu18lRA%2F&X-Amz-Signature=650e4791dc8cc7bbb08d74be35984054c4999c89a5732c32c925749e7e7d7fb8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SYQUOR3T%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132800Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPUh3YYZYeMuBYwG6qGdWwg1Bdte2Vzdu5zAbsAE8k1QIgNy1MYtG4GJmn87n4A3VcMp7xUBidZORpUGa9IHWmOasq%2FwMIdRAAGgw2Mzc0MjMxODM4MDUiDFET8OSURwD5x80umCrcA1gUFMfYbbY1rcWPCksRf5ahP4KNWvGq7%2FIziezv2utayscLOtTF6m1GUQPR%2F38oO8MEeiTJTJahGDkWgfIsbCpGrFj1XUZ2gsO0LH%2FOUUPkdbcFnEERP9E2e0audh5n3mw8UJXMpxCYwAk7IlR5TkYaxPk4VtToDnx3bU3F6KF3GJsv7pKGgZnUFCmaLyr%2FtDhyST43LAu1u%2Fl1h79Hug45T0XF9wxXo2LbUthZw4gcJ2fi56%2FlqCk2Dv0eIZ0GOlGUTV07zggAgGHFrWI96GxeeOY7RijoxjmH3mfZZ%2BZqLC8tIIzrb7B1ShMqzQw1DLBSKxjpxfc39hvQJlprezZi9JresvUeB%2BN36z7IZMW0h%2BqHBox5%2B97mV4fLE4G2wdnT2pj7NQF2gO1T7CJFoB0K7hrsi4xrbaPaPr2WDGkFjPDNxVyrUevlu1iVVqGClzduKXaIWXOiVZsHModCvLFvCnf3M8454Az%2FdbS1FCyMy2G1ANxqwQ93TjvIMXjYxCGDUsFPg%2FouwABHi8BOVJeabQCCbQ8GEpl8Iqger7w00ONZOGLjSm03t261q7eVYBIY081GC90V6Fcfhd9T7h8edA2AOt9pWrrVHy4obwJh3V%2FFTq6UksfT3EHCMLSD6NYGOqUB%2BuH%2BIrRKwQbD%2FRLXZdG0SwGsrk4W5dA0lRm04eR%2BVWSsiyoKZjzZbbtJms7AKbvo4BQZ348Qdrq2b9Orlgb7cdmllihDOZG%2FFjyihw5rV2ppg2mKaBQTK%2FnlYvlS9lVe%2BC4jIbPaHSoGVpj2GJ%2B%2F7ylpW56ZUIX0NrIFW2Yoro%2BR%2F434N8UJbiuVCQQDJphGbzrIZd3ZFSWh8XaQX3JlRu18lRA%2F&X-Amz-Signature=79ddaa62715d9f6d406a3995e920f725aa95bd260f4b118049f80b2e67b505e0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SYQUOR3T%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132800Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPUh3YYZYeMuBYwG6qGdWwg1Bdte2Vzdu5zAbsAE8k1QIgNy1MYtG4GJmn87n4A3VcMp7xUBidZORpUGa9IHWmOasq%2FwMIdRAAGgw2Mzc0MjMxODM4MDUiDFET8OSURwD5x80umCrcA1gUFMfYbbY1rcWPCksRf5ahP4KNWvGq7%2FIziezv2utayscLOtTF6m1GUQPR%2F38oO8MEeiTJTJahGDkWgfIsbCpGrFj1XUZ2gsO0LH%2FOUUPkdbcFnEERP9E2e0audh5n3mw8UJXMpxCYwAk7IlR5TkYaxPk4VtToDnx3bU3F6KF3GJsv7pKGgZnUFCmaLyr%2FtDhyST43LAu1u%2Fl1h79Hug45T0XF9wxXo2LbUthZw4gcJ2fi56%2FlqCk2Dv0eIZ0GOlGUTV07zggAgGHFrWI96GxeeOY7RijoxjmH3mfZZ%2BZqLC8tIIzrb7B1ShMqzQw1DLBSKxjpxfc39hvQJlprezZi9JresvUeB%2BN36z7IZMW0h%2BqHBox5%2B97mV4fLE4G2wdnT2pj7NQF2gO1T7CJFoB0K7hrsi4xrbaPaPr2WDGkFjPDNxVyrUevlu1iVVqGClzduKXaIWXOiVZsHModCvLFvCnf3M8454Az%2FdbS1FCyMy2G1ANxqwQ93TjvIMXjYxCGDUsFPg%2FouwABHi8BOVJeabQCCbQ8GEpl8Iqger7w00ONZOGLjSm03t261q7eVYBIY081GC90V6Fcfhd9T7h8edA2AOt9pWrrVHy4obwJh3V%2FFTq6UksfT3EHCMLSD6NYGOqUB%2BuH%2BIrRKwQbD%2FRLXZdG0SwGsrk4W5dA0lRm04eR%2BVWSsiyoKZjzZbbtJms7AKbvo4BQZ348Qdrq2b9Orlgb7cdmllihDOZG%2FFjyihw5rV2ppg2mKaBQTK%2FnlYvlS9lVe%2BC4jIbPaHSoGVpj2GJ%2B%2F7ylpW56ZUIX0NrIFW2Yoro%2BR%2F434N8UJbiuVCQQDJphGbzrIZd3ZFSWh8XaQX3JlRu18lRA%2F&X-Amz-Signature=b72d08cd7b993d1e851bc45a63338804a0e433717d447077675c62ab950ce7c3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662UFXUB56%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132800Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuuiKYSy%2BC%2BFDt26WkeTd4ZUHx1ILHHzb6whdd6ipu1QIhAMZEy8PseRaWICuth1WVYQkA%2FN9r3YapYXC7c31RFvBfKv8DCHUQABoMNjM3NDIzMTgzODA1IgyH5LludbDWPD1njd4q3AMH9oiSn56gAYnlyBI11Q%2FfpS9Q23gDoJiCJYXKoq029BV3j1UHxKcOQAZSF%2BBybV%2FS4mjIcwsgtY9LUoExQKwHSTOqgvJZw8iUkM%2FRuvr1ccQbkbSx5%2BikP5FIuFk3vWmDFp8PEBzmUc5Zxm7c6rTvScxi9dEmw2P8SMC9gtVMV8gXMEryKx%2F92KE5OJz5i68aZbpaBiQdZe6d4VDGmDTJKa1jMYiD5VPZdn6xclgWeM6bV0OUo73gl4QPzw4H1iQnw7NPMTupwg8ZvvUR6s9962Si6kbzD0B5GyiswU%2F8kKneY7zzldLfBjlTYpYl8HQyNCY5ENwZpoA7XldCCmPH4QvG9olGtgXQ3MIZA0RFvhOYHON9U%2FNFSIPosDPBxqmC4eJs%2BeVTRLXzG1AYUqkxJHH5fiM2HfMRaOHs1EcxuCPCADWB4h1UmWo9Y3X7v95fUpomeEQrSs7Hi6Vk7ImUVPNdGvUPbHnkdfMB4jYjuiGClVp8ek%2FfRSWv3oB3OlTDqkjwAD3XxFie57Uk9ZSsX%2BR%2B%2B6ZS1vWYIPBwovRkydvoc5cgBy0RqqBDLpzj%2Bv90gPo%2Fo0e4EDaKXZ2vi6fBvL9YP4jOsPR9E0QuCl8SWptuUfW9Ar2QH%2FtyRzD6g%2BjWBjqkAREXNWpOOmuFNKaE79PF3PeotuMyBWEmcU%2FimZ6bl4VZ2QUpJvZ7cwlKcl8MwEmQ2EmkNcLMLPTpqRSPoOAili9E6i%2BW0FI8x5j35BAN1DNpByw5XkMXcaUUG4VtJ0KdLUlfDYUf%2FocQ%2BmJ3fzbRzpO5Q5rMlAsr6CijUN1L5uIEL%2BZxtJDCbWuUIGPqEPyjHdqsDnfYh5Ux%2BCBTnY7MZOHft%2FTr&X-Amz-Signature=e3167f6cb7717a8125daf76d5f175cb540b841af7cb20d633844d1d847b16de9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662UFXUB56%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132800Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuuiKYSy%2BC%2BFDt26WkeTd4ZUHx1ILHHzb6whdd6ipu1QIhAMZEy8PseRaWICuth1WVYQkA%2FN9r3YapYXC7c31RFvBfKv8DCHUQABoMNjM3NDIzMTgzODA1IgyH5LludbDWPD1njd4q3AMH9oiSn56gAYnlyBI11Q%2FfpS9Q23gDoJiCJYXKoq029BV3j1UHxKcOQAZSF%2BBybV%2FS4mjIcwsgtY9LUoExQKwHSTOqgvJZw8iUkM%2FRuvr1ccQbkbSx5%2BikP5FIuFk3vWmDFp8PEBzmUc5Zxm7c6rTvScxi9dEmw2P8SMC9gtVMV8gXMEryKx%2F92KE5OJz5i68aZbpaBiQdZe6d4VDGmDTJKa1jMYiD5VPZdn6xclgWeM6bV0OUo73gl4QPzw4H1iQnw7NPMTupwg8ZvvUR6s9962Si6kbzD0B5GyiswU%2F8kKneY7zzldLfBjlTYpYl8HQyNCY5ENwZpoA7XldCCmPH4QvG9olGtgXQ3MIZA0RFvhOYHON9U%2FNFSIPosDPBxqmC4eJs%2BeVTRLXzG1AYUqkxJHH5fiM2HfMRaOHs1EcxuCPCADWB4h1UmWo9Y3X7v95fUpomeEQrSs7Hi6Vk7ImUVPNdGvUPbHnkdfMB4jYjuiGClVp8ek%2FfRSWv3oB3OlTDqkjwAD3XxFie57Uk9ZSsX%2BR%2B%2B6ZS1vWYIPBwovRkydvoc5cgBy0RqqBDLpzj%2Bv90gPo%2Fo0e4EDaKXZ2vi6fBvL9YP4jOsPR9E0QuCl8SWptuUfW9Ar2QH%2FtyRzD6g%2BjWBjqkAREXNWpOOmuFNKaE79PF3PeotuMyBWEmcU%2FimZ6bl4VZ2QUpJvZ7cwlKcl8MwEmQ2EmkNcLMLPTpqRSPoOAili9E6i%2BW0FI8x5j35BAN1DNpByw5XkMXcaUUG4VtJ0KdLUlfDYUf%2FocQ%2BmJ3fzbRzpO5Q5rMlAsr6CijUN1L5uIEL%2BZxtJDCbWuUIGPqEPyjHdqsDnfYh5Ux%2BCBTnY7MZOHft%2FTr&X-Amz-Signature=8e75bcc01aacb5692b215f9049be26d2f5568ffeba01b103b70b580bebc93dcc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662UFXUB56%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132800Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuuiKYSy%2BC%2BFDt26WkeTd4ZUHx1ILHHzb6whdd6ipu1QIhAMZEy8PseRaWICuth1WVYQkA%2FN9r3YapYXC7c31RFvBfKv8DCHUQABoMNjM3NDIzMTgzODA1IgyH5LludbDWPD1njd4q3AMH9oiSn56gAYnlyBI11Q%2FfpS9Q23gDoJiCJYXKoq029BV3j1UHxKcOQAZSF%2BBybV%2FS4mjIcwsgtY9LUoExQKwHSTOqgvJZw8iUkM%2FRuvr1ccQbkbSx5%2BikP5FIuFk3vWmDFp8PEBzmUc5Zxm7c6rTvScxi9dEmw2P8SMC9gtVMV8gXMEryKx%2F92KE5OJz5i68aZbpaBiQdZe6d4VDGmDTJKa1jMYiD5VPZdn6xclgWeM6bV0OUo73gl4QPzw4H1iQnw7NPMTupwg8ZvvUR6s9962Si6kbzD0B5GyiswU%2F8kKneY7zzldLfBjlTYpYl8HQyNCY5ENwZpoA7XldCCmPH4QvG9olGtgXQ3MIZA0RFvhOYHON9U%2FNFSIPosDPBxqmC4eJs%2BeVTRLXzG1AYUqkxJHH5fiM2HfMRaOHs1EcxuCPCADWB4h1UmWo9Y3X7v95fUpomeEQrSs7Hi6Vk7ImUVPNdGvUPbHnkdfMB4jYjuiGClVp8ek%2FfRSWv3oB3OlTDqkjwAD3XxFie57Uk9ZSsX%2BR%2B%2B6ZS1vWYIPBwovRkydvoc5cgBy0RqqBDLpzj%2Bv90gPo%2Fo0e4EDaKXZ2vi6fBvL9YP4jOsPR9E0QuCl8SWptuUfW9Ar2QH%2FtyRzD6g%2BjWBjqkAREXNWpOOmuFNKaE79PF3PeotuMyBWEmcU%2FimZ6bl4VZ2QUpJvZ7cwlKcl8MwEmQ2EmkNcLMLPTpqRSPoOAili9E6i%2BW0FI8x5j35BAN1DNpByw5XkMXcaUUG4VtJ0KdLUlfDYUf%2FocQ%2BmJ3fzbRzpO5Q5rMlAsr6CijUN1L5uIEL%2BZxtJDCbWuUIGPqEPyjHdqsDnfYh5Ux%2BCBTnY7MZOHft%2FTr&X-Amz-Signature=dd51c3264394567bab76b1c29a2c595e88f30ded0889b9db57088b97112300b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662UFXUB56%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132800Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuuiKYSy%2BC%2BFDt26WkeTd4ZUHx1ILHHzb6whdd6ipu1QIhAMZEy8PseRaWICuth1WVYQkA%2FN9r3YapYXC7c31RFvBfKv8DCHUQABoMNjM3NDIzMTgzODA1IgyH5LludbDWPD1njd4q3AMH9oiSn56gAYnlyBI11Q%2FfpS9Q23gDoJiCJYXKoq029BV3j1UHxKcOQAZSF%2BBybV%2FS4mjIcwsgtY9LUoExQKwHSTOqgvJZw8iUkM%2FRuvr1ccQbkbSx5%2BikP5FIuFk3vWmDFp8PEBzmUc5Zxm7c6rTvScxi9dEmw2P8SMC9gtVMV8gXMEryKx%2F92KE5OJz5i68aZbpaBiQdZe6d4VDGmDTJKa1jMYiD5VPZdn6xclgWeM6bV0OUo73gl4QPzw4H1iQnw7NPMTupwg8ZvvUR6s9962Si6kbzD0B5GyiswU%2F8kKneY7zzldLfBjlTYpYl8HQyNCY5ENwZpoA7XldCCmPH4QvG9olGtgXQ3MIZA0RFvhOYHON9U%2FNFSIPosDPBxqmC4eJs%2BeVTRLXzG1AYUqkxJHH5fiM2HfMRaOHs1EcxuCPCADWB4h1UmWo9Y3X7v95fUpomeEQrSs7Hi6Vk7ImUVPNdGvUPbHnkdfMB4jYjuiGClVp8ek%2FfRSWv3oB3OlTDqkjwAD3XxFie57Uk9ZSsX%2BR%2B%2B6ZS1vWYIPBwovRkydvoc5cgBy0RqqBDLpzj%2Bv90gPo%2Fo0e4EDaKXZ2vi6fBvL9YP4jOsPR9E0QuCl8SWptuUfW9Ar2QH%2FtyRzD6g%2BjWBjqkAREXNWpOOmuFNKaE79PF3PeotuMyBWEmcU%2FimZ6bl4VZ2QUpJvZ7cwlKcl8MwEmQ2EmkNcLMLPTpqRSPoOAili9E6i%2BW0FI8x5j35BAN1DNpByw5XkMXcaUUG4VtJ0KdLUlfDYUf%2FocQ%2BmJ3fzbRzpO5Q5rMlAsr6CijUN1L5uIEL%2BZxtJDCbWuUIGPqEPyjHdqsDnfYh5Ux%2BCBTnY7MZOHft%2FTr&X-Amz-Signature=bb8ff1b17a38cd4f9c1e04702ab38cc4ce690f1101273a709c08ed2ddf73d1b7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UDZUU4KF%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132801Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDkeIiSFTTzKPo8NnHRZOOsIA4yi3VIwHCZAQ8rA63zewIgGDMMRrybxM%2F%2BLZVwuFA5Hf1XHAoDn7K5oRJcUA7CEuAq%2FwMIdhAAGgw2Mzc0MjMxODM4MDUiDH4mZLb3afJaY7TWqSrcAyfqMQ2abaq%2F8qETpPdwa5fjZEm2kzR3KicAZllxdZgF7KSdL%2BPLeKQ%2B5UZREjihf1xWIa4vVOONYjmZ5CMShqJm%2FElcjMY%2BPTqy28TWVFWvYyCJdbXEAwsYZVOTw56wA%2FGNXHezQ8g5A7WnVhHLF2Xe%2BdM2R7Ds10QHOtJNHiiyz%2Fxo3K4zcaPhuIOEZNDjbk5twBbfVthRJ4NNWBap%2BDLzOmLTQK5T%2FnoqE1WwPZkxtaVHzUvL%2Fah7fPHb99OrgqZlDMKZClI%2FfsIbd1VabKIMuykn%2FEEIpACrHu4h6UB7QLGfZtwUIEOB43F7aQnyc1%2FbHCEyNPaORHJDqLeKM0%2FUG2vbe7XdEe3nzFlIUO2iHa17e3tiAzJ2ZeE0%2FOLlPGKUM095hF9VazVhbHIWvekBIzHR2qi2yLeJctM0bN5zmO0tPhum8hA%2BE9hlUg6eAgN1pNwWYahkBu6OEiLDr65axFKJit90UJ0t%2BT1o2rfaVbIVnbsWNwf13boveYZeEV3s2k22KgALLZmBgqUWDCG9gTR%2B%2Bl2rOk%2F2fxGMLvi31PjudHvojuMdi4NNgHX3gD52I6UzclSSMllR6jhSkImLeiVpJVTbHsYaxTv6F5vZ3cO810y23AXNs2YYMKiG6NYGOqUB93dv8S5fn2LJVoOpY7uAl3oYZQ%2BVw90Ycq1pwQY2HQPpyCLtLNgJi9sNLU6ba4GflQqzI5dXkmsrt0g5DJHT6abcthzVXgF733IBUec%2BE6i0Mzt2HtUrvTvZQjAn%2BSonSNd0YG6pro6ygdrYYtK%2Flmrig9IDt2aSq6pb6Vuk03q%2B7M6XskTgh91RkwxlVe2jEc4XAYDk3Ll7Y0B4S2622blovNs4&X-Amz-Signature=b22120bb5a697aba6d35c3d00a268a48b158e385ec070c8648060b76a61101d5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666REMLID7%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132801Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQClr8BL9sxfuR%2B5J0zMu%2BnGXfjHPsUhsWeq6IsPSVZ4DgIhAKh8l%2BDVPlDCnd28lmw4nZGgRFSH0AIUAKVTfYn89SwtKv8DCHUQABoMNjM3NDIzMTgzODA1IgyRfypZErBIHAYkGLkq3ANyY1MZHDQXDFnWhQHvSyUggOYXuzGVEA5l2efqBwUnT96VBcO%2FYziiChV16Cpg3BmHznvXl%2F8ve8Gk6x%2Fj%2BMkMmHlfNU%2BxYWojyU2K1EV2mmqKy7SZW%2BctYcqifMtB4lGEhKXHRoPcARfnIq64QnK94BQ6lrvYh7JEqNy6OYwBwCis0M068dip00E4XkgjKCRObMG5GD92eK9iGG29CBEZ7XWWJRkUQTOGQOuUEPJukgWiT5i2c9PgNkIRhrV4P%2FS8fMk2qAeSTB9rNLJyuSVKUmP%2BDIZ2bHnOQoGOOLMW4fbkGL93WAGePo7ijk0dHV1iNRPAzEg6ZnzbW5Eya2cPn9TTF7%2Bz6pD5f4AcVfhvQ7PJcZ4z1hUDtbMAXc6FqWSNCuRgJde2UEf5Q2ucV8CvTkq710rE%2BWVSmtn5AsnqT7dcd4%2FWNLAX%2B62h12eOljxGs4tt0w9cnt4TueEkfKN3Wxkta9izUgIKAWhhL%2FyLcSSwNysdJzAiLEpCo5nu%2FCTKeqJO3u%2BFY%2FjmA4g5adKLT%2FBsOoN9ahlGwJtIlEMML2ufgCYDWjozZ084aom5oE0jdvZd1rST3vrUAlh67PuDL0GcpUlzNRoKYKZEX%2Fque2thwVCNpHnIn2U9yzDRg%2BjWBjqkATJVblxxrzVicKjI4jFqTfQO8dHKeWtadsDh5rry5CJAuD7Y4DPnKsDVv5cEYY7h%2BkzsrQ6gq1A5M8k95DUYizTQ73zu614upuqRSUjb%2FdQ6WdOYPpsaJ6u5DPEHwTrcvzc0tjMq3VZcJYZCBNgNUVSvDEUdEvD9af6QZ%2BEJxYYdULyaqr9IW%2FeiECEzMQwPBFkhhODbA3L0KA0FcfXzgvinC2Np&X-Amz-Signature=f6abf6302ea7ca1ec19a745fadbbd0c21ab1221f4a430b3003bad14eae55d86c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666REMLID7%2F20261022%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261022T132801Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQClr8BL9sxfuR%2B5J0zMu%2BnGXfjHPsUhsWeq6IsPSVZ4DgIhAKh8l%2BDVPlDCnd28lmw4nZGgRFSH0AIUAKVTfYn89SwtKv8DCHUQABoMNjM3NDIzMTgzODA1IgyRfypZErBIHAYkGLkq3ANyY1MZHDQXDFnWhQHvSyUggOYXuzGVEA5l2efqBwUnT96VBcO%2FYziiChV16Cpg3BmHznvXl%2F8ve8Gk6x%2Fj%2BMkMmHlfNU%2BxYWojyU2K1EV2mmqKy7SZW%2BctYcqifMtB4lGEhKXHRoPcARfnIq64QnK94BQ6lrvYh7JEqNy6OYwBwCis0M068dip00E4XkgjKCRObMG5GD92eK9iGG29CBEZ7XWWJRkUQTOGQOuUEPJukgWiT5i2c9PgNkIRhrV4P%2FS8fMk2qAeSTB9rNLJyuSVKUmP%2BDIZ2bHnOQoGOOLMW4fbkGL93WAGePo7ijk0dHV1iNRPAzEg6ZnzbW5Eya2cPn9TTF7%2Bz6pD5f4AcVfhvQ7PJcZ4z1hUDtbMAXc6FqWSNCuRgJde2UEf5Q2ucV8CvTkq710rE%2BWVSmtn5AsnqT7dcd4%2FWNLAX%2B62h12eOljxGs4tt0w9cnt4TueEkfKN3Wxkta9izUgIKAWhhL%2FyLcSSwNysdJzAiLEpCo5nu%2FCTKeqJO3u%2BFY%2FjmA4g5adKLT%2FBsOoN9ahlGwJtIlEMML2ufgCYDWjozZ084aom5oE0jdvZd1rST3vrUAlh67PuDL0GcpUlzNRoKYKZEX%2Fque2thwVCNpHnIn2U9yzDRg%2BjWBjqkATJVblxxrzVicKjI4jFqTfQO8dHKeWtadsDh5rry5CJAuD7Y4DPnKsDVv5cEYY7h%2BkzsrQ6gq1A5M8k95DUYizTQ73zu614upuqRSUjb%2FdQ6WdOYPpsaJ6u5DPEHwTrcvzc0tjMq3VZcJYZCBNgNUVSvDEUdEvD9af6QZ%2BEJxYYdULyaqr9IW%2FeiECEzMQwPBFkhhODbA3L0KA0FcfXzgvinC2Np&X-Amz-Signature=b49dedaa6a6172a773079281709bfe87e4dcd893251bcf938dec9d90c832b7ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
