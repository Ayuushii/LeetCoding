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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667GGOCCJ%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJHMEUCIEfdq8Usb%2FO0mmQHVeB1boTtJlLRkUOEahHXAhjqQoR3AiEAvULtUUphphjyMJQE9zn8ub3hyqT%2F%2BAQ6ihhvBgr%2FpjUqiAQI%2Ff%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJCuYqpjG0v8XRtlBircA8q5I5iM%2BAJACOVSgVrtua2Vywx1kZf6wYUZwCXxBpM9Xe4GpyzQtFwifzLNW%2BRA1p63PehALyougctoe%2BV7wcGgrvCNbpo457jJcfk01k6kC7iM6zKKq%2FkRSoxtWLms5HKBeM0%2FYJPfNDuBRsx0t9ORlgw8lJx8NRm5t7Z97J60sN5RK281EMOj9UC3w5l5EcE41j1NTWq%2Bis9jvkWnQ4uc8%2FtGH1A8PKbeCAxHX4nhnzwzLHis9iW0yOcNMXf940MW4JfvQax6jLLt9aPY5IfD2ASF7phOXHtJmWjQA6CKCpKaMSzDIaSoxOqliIDbjIwKqTKUjF9%2BsJe85uWzNMSUWnrwzQQqCojfh4byCDiX%2BVJ0GpOGOlOj1kv5uuzqQ3Rn%2F2eIkKp5m056d9p51r23q%2BNv1ROCMk11UAite3dR9WBSWBDt32Moel6OKITJmwoFVtLM5IawGUoKaxNfCrkd2r5t0dP%2Fd2Z%2FCn%2B06VQdH5dk3V0Y5HgPM6AQIFVz5fVJACzcpwycifMoDMQOa%2BRI2FffREAYUu1yEW5rSyoKJDr0GhVyUbMhnM7nfDpwij5arJolVb9X1pwA5IiL%2FDdhdDK0N%2BSYF9Aga3Rqy9I58aJuHPxSlIpoSErpMJq7zdYGOqUBEAE0IkCQIFh3W8ybWIS0E67ICprws5yX%2BxisWXZ8qp17sD3U2Kls11YUhPWJ%2F10uyielg8EP%2FnTNdx7KWfJ3bN5cgFcXEO2iShIXF4oMWGH0ounkOAZi22BQHq3DTZmTKVuHdpT%2FZv%2B7HR3NfpiNA8lEn4ZfCzWnqmvnKOSMB6poBsYZqw8BG90d7mMBYYvJd%2B6XuMSL6UCurHBLrqJYW1DlDNCx&X-Amz-Signature=fc2600f9f5052485a0da416a3bd68d7a6edb6cc06db20e4c6c934c5bc10f6a63&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667GGOCCJ%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJHMEUCIEfdq8Usb%2FO0mmQHVeB1boTtJlLRkUOEahHXAhjqQoR3AiEAvULtUUphphjyMJQE9zn8ub3hyqT%2F%2BAQ6ihhvBgr%2FpjUqiAQI%2Ff%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJCuYqpjG0v8XRtlBircA8q5I5iM%2BAJACOVSgVrtua2Vywx1kZf6wYUZwCXxBpM9Xe4GpyzQtFwifzLNW%2BRA1p63PehALyougctoe%2BV7wcGgrvCNbpo457jJcfk01k6kC7iM6zKKq%2FkRSoxtWLms5HKBeM0%2FYJPfNDuBRsx0t9ORlgw8lJx8NRm5t7Z97J60sN5RK281EMOj9UC3w5l5EcE41j1NTWq%2Bis9jvkWnQ4uc8%2FtGH1A8PKbeCAxHX4nhnzwzLHis9iW0yOcNMXf940MW4JfvQax6jLLt9aPY5IfD2ASF7phOXHtJmWjQA6CKCpKaMSzDIaSoxOqliIDbjIwKqTKUjF9%2BsJe85uWzNMSUWnrwzQQqCojfh4byCDiX%2BVJ0GpOGOlOj1kv5uuzqQ3Rn%2F2eIkKp5m056d9p51r23q%2BNv1ROCMk11UAite3dR9WBSWBDt32Moel6OKITJmwoFVtLM5IawGUoKaxNfCrkd2r5t0dP%2Fd2Z%2FCn%2B06VQdH5dk3V0Y5HgPM6AQIFVz5fVJACzcpwycifMoDMQOa%2BRI2FffREAYUu1yEW5rSyoKJDr0GhVyUbMhnM7nfDpwij5arJolVb9X1pwA5IiL%2FDdhdDK0N%2BSYF9Aga3Rqy9I58aJuHPxSlIpoSErpMJq7zdYGOqUBEAE0IkCQIFh3W8ybWIS0E67ICprws5yX%2BxisWXZ8qp17sD3U2Kls11YUhPWJ%2F10uyielg8EP%2FnTNdx7KWfJ3bN5cgFcXEO2iShIXF4oMWGH0ounkOAZi22BQHq3DTZmTKVuHdpT%2FZv%2B7HR3NfpiNA8lEn4ZfCzWnqmvnKOSMB6poBsYZqw8BG90d7mMBYYvJd%2B6XuMSL6UCurHBLrqJYW1DlDNCx&X-Amz-Signature=bce5e0ba992de882a5ac6383f29a1902af8408f82505421945bd071c05b64b34&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667GGOCCJ%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJHMEUCIEfdq8Usb%2FO0mmQHVeB1boTtJlLRkUOEahHXAhjqQoR3AiEAvULtUUphphjyMJQE9zn8ub3hyqT%2F%2BAQ6ihhvBgr%2FpjUqiAQI%2Ff%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJCuYqpjG0v8XRtlBircA8q5I5iM%2BAJACOVSgVrtua2Vywx1kZf6wYUZwCXxBpM9Xe4GpyzQtFwifzLNW%2BRA1p63PehALyougctoe%2BV7wcGgrvCNbpo457jJcfk01k6kC7iM6zKKq%2FkRSoxtWLms5HKBeM0%2FYJPfNDuBRsx0t9ORlgw8lJx8NRm5t7Z97J60sN5RK281EMOj9UC3w5l5EcE41j1NTWq%2Bis9jvkWnQ4uc8%2FtGH1A8PKbeCAxHX4nhnzwzLHis9iW0yOcNMXf940MW4JfvQax6jLLt9aPY5IfD2ASF7phOXHtJmWjQA6CKCpKaMSzDIaSoxOqliIDbjIwKqTKUjF9%2BsJe85uWzNMSUWnrwzQQqCojfh4byCDiX%2BVJ0GpOGOlOj1kv5uuzqQ3Rn%2F2eIkKp5m056d9p51r23q%2BNv1ROCMk11UAite3dR9WBSWBDt32Moel6OKITJmwoFVtLM5IawGUoKaxNfCrkd2r5t0dP%2Fd2Z%2FCn%2B06VQdH5dk3V0Y5HgPM6AQIFVz5fVJACzcpwycifMoDMQOa%2BRI2FffREAYUu1yEW5rSyoKJDr0GhVyUbMhnM7nfDpwij5arJolVb9X1pwA5IiL%2FDdhdDK0N%2BSYF9Aga3Rqy9I58aJuHPxSlIpoSErpMJq7zdYGOqUBEAE0IkCQIFh3W8ybWIS0E67ICprws5yX%2BxisWXZ8qp17sD3U2Kls11YUhPWJ%2F10uyielg8EP%2FnTNdx7KWfJ3bN5cgFcXEO2iShIXF4oMWGH0ounkOAZi22BQHq3DTZmTKVuHdpT%2FZv%2B7HR3NfpiNA8lEn4ZfCzWnqmvnKOSMB6poBsYZqw8BG90d7mMBYYvJd%2B6XuMSL6UCurHBLrqJYW1DlDNCx&X-Amz-Signature=53a9176abec46b14872a009eed10279f22211bd7db97a32ed31875508d9c8ada&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YEENBI7L%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJIMEYCIQDyBQEN3vI8%2Fb5xGsqAHoYvOsFd0%2F4k9f8E67M7W34g8wIhAMsUtFfmz2sKIWYsg2kzKWQFd2AV3cUp9x2p2xUjs8GaKogECP3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzPRXEvoncNsahzoJEq3AMyKsO0UrXXIaooq%2Bo0QnPCcYDIc%2FuPW%2BcGmtP0xgJGrF8pHqaAq%2BcHMzafwnKmiQk%2FWE0ZDgNVbPlWH7XhoAfzhCgNw8LncP3yp3KLhpRwDycZsyipIsa%2F%2Ft1AdZxQm%2FsmlJmfjuUFA5HpM52X%2FMqfEnJWUquOIKHMPyVBHbuC89%2B1KFPxYyhR8D1mnmfGWdWoYK56%2B%2BQm3A7Quo43CiPRcRwaBAmmz1RAuWpGNuXbyGl0mKl7j3DttBtq87C4DBVggximE2W1ROydalnZc9x923mqhpesdIzq6iK%2BfV1PSIhopL0ZvDU1bYlqs%2F8vTPOVRYQYkl0oZIC%2F98QO5SvGDezhxEiD67EK7QpiiVfiAFr4HEd4RMPnZXeuql1i%2BOfUXrwEIV3NP0TjzPWW3reZLeAowhXC3xe8LEJvyNckcq5sFwaXYQ8Gy%2FFHtlVFdlIU6yjORE0ThCudtzZx8o9zo63xuIDtCPOKi0BF86j8but9Su%2FP6heYto%2Bac%2BmsepB4uwOMzYf2UX7UYxu5mEL7VSqTuEKgvBD8Q7W24aVJe2XIPR%2B4UcbuCSIdQuTkls3c4FRzbxvyPTjvuR5BEOidHDM0T9njzqm1E6xql57OZGR4K5%2B5QTLWsoelhTDjvM3WBjqkAcEF1ro2%2BHd4zJT9yxukqqDr3TFN3Py7NpC17SjsQ7z%2FF41nawT9mCCyEZxBSVLgfhWefSYagipy9aAIf4k50pWGVKO8S3yA%2F%2B3SGRyZHiX8JDQh9qcms8jj%2FDTKQotMA13fYeVobhLv17FgE8CI5mqMsGU9Gk7A%2FY4534CCsToKY7f26U0Y8NgmrI%2FlT0xVNjBZH1dANKpmIWlpCWjCr%2F89058%2B&X-Amz-Signature=d7a58f05db494be6007093c438b2dbc00757ddf883d6580231fa447e84a0755e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YEENBI7L%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJIMEYCIQDyBQEN3vI8%2Fb5xGsqAHoYvOsFd0%2F4k9f8E67M7W34g8wIhAMsUtFfmz2sKIWYsg2kzKWQFd2AV3cUp9x2p2xUjs8GaKogECP3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzPRXEvoncNsahzoJEq3AMyKsO0UrXXIaooq%2Bo0QnPCcYDIc%2FuPW%2BcGmtP0xgJGrF8pHqaAq%2BcHMzafwnKmiQk%2FWE0ZDgNVbPlWH7XhoAfzhCgNw8LncP3yp3KLhpRwDycZsyipIsa%2F%2Ft1AdZxQm%2FsmlJmfjuUFA5HpM52X%2FMqfEnJWUquOIKHMPyVBHbuC89%2B1KFPxYyhR8D1mnmfGWdWoYK56%2B%2BQm3A7Quo43CiPRcRwaBAmmz1RAuWpGNuXbyGl0mKl7j3DttBtq87C4DBVggximE2W1ROydalnZc9x923mqhpesdIzq6iK%2BfV1PSIhopL0ZvDU1bYlqs%2F8vTPOVRYQYkl0oZIC%2F98QO5SvGDezhxEiD67EK7QpiiVfiAFr4HEd4RMPnZXeuql1i%2BOfUXrwEIV3NP0TjzPWW3reZLeAowhXC3xe8LEJvyNckcq5sFwaXYQ8Gy%2FFHtlVFdlIU6yjORE0ThCudtzZx8o9zo63xuIDtCPOKi0BF86j8but9Su%2FP6heYto%2Bac%2BmsepB4uwOMzYf2UX7UYxu5mEL7VSqTuEKgvBD8Q7W24aVJe2XIPR%2B4UcbuCSIdQuTkls3c4FRzbxvyPTjvuR5BEOidHDM0T9njzqm1E6xql57OZGR4K5%2B5QTLWsoelhTDjvM3WBjqkAcEF1ro2%2BHd4zJT9yxukqqDr3TFN3Py7NpC17SjsQ7z%2FF41nawT9mCCyEZxBSVLgfhWefSYagipy9aAIf4k50pWGVKO8S3yA%2F%2B3SGRyZHiX8JDQh9qcms8jj%2FDTKQotMA13fYeVobhLv17FgE8CI5mqMsGU9Gk7A%2FY4534CCsToKY7f26U0Y8NgmrI%2FlT0xVNjBZH1dANKpmIWlpCWjCr%2F89058%2B&X-Amz-Signature=bdb67c85b5dc826bd5b604095141b526e546f5fd7450115a4f86200272346aa4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YEENBI7L%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJIMEYCIQDyBQEN3vI8%2Fb5xGsqAHoYvOsFd0%2F4k9f8E67M7W34g8wIhAMsUtFfmz2sKIWYsg2kzKWQFd2AV3cUp9x2p2xUjs8GaKogECP3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzPRXEvoncNsahzoJEq3AMyKsO0UrXXIaooq%2Bo0QnPCcYDIc%2FuPW%2BcGmtP0xgJGrF8pHqaAq%2BcHMzafwnKmiQk%2FWE0ZDgNVbPlWH7XhoAfzhCgNw8LncP3yp3KLhpRwDycZsyipIsa%2F%2Ft1AdZxQm%2FsmlJmfjuUFA5HpM52X%2FMqfEnJWUquOIKHMPyVBHbuC89%2B1KFPxYyhR8D1mnmfGWdWoYK56%2B%2BQm3A7Quo43CiPRcRwaBAmmz1RAuWpGNuXbyGl0mKl7j3DttBtq87C4DBVggximE2W1ROydalnZc9x923mqhpesdIzq6iK%2BfV1PSIhopL0ZvDU1bYlqs%2F8vTPOVRYQYkl0oZIC%2F98QO5SvGDezhxEiD67EK7QpiiVfiAFr4HEd4RMPnZXeuql1i%2BOfUXrwEIV3NP0TjzPWW3reZLeAowhXC3xe8LEJvyNckcq5sFwaXYQ8Gy%2FFHtlVFdlIU6yjORE0ThCudtzZx8o9zo63xuIDtCPOKi0BF86j8but9Su%2FP6heYto%2Bac%2BmsepB4uwOMzYf2UX7UYxu5mEL7VSqTuEKgvBD8Q7W24aVJe2XIPR%2B4UcbuCSIdQuTkls3c4FRzbxvyPTjvuR5BEOidHDM0T9njzqm1E6xql57OZGR4K5%2B5QTLWsoelhTDjvM3WBjqkAcEF1ro2%2BHd4zJT9yxukqqDr3TFN3Py7NpC17SjsQ7z%2FF41nawT9mCCyEZxBSVLgfhWefSYagipy9aAIf4k50pWGVKO8S3yA%2F%2B3SGRyZHiX8JDQh9qcms8jj%2FDTKQotMA13fYeVobhLv17FgE8CI5mqMsGU9Gk7A%2FY4534CCsToKY7f26U0Y8NgmrI%2FlT0xVNjBZH1dANKpmIWlpCWjCr%2F89058%2B&X-Amz-Signature=c19520acad14b591cf0684b801d31811b51b9f265a93f624f096801be6d8b7ea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YEENBI7L%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJIMEYCIQDyBQEN3vI8%2Fb5xGsqAHoYvOsFd0%2F4k9f8E67M7W34g8wIhAMsUtFfmz2sKIWYsg2kzKWQFd2AV3cUp9x2p2xUjs8GaKogECP3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzPRXEvoncNsahzoJEq3AMyKsO0UrXXIaooq%2Bo0QnPCcYDIc%2FuPW%2BcGmtP0xgJGrF8pHqaAq%2BcHMzafwnKmiQk%2FWE0ZDgNVbPlWH7XhoAfzhCgNw8LncP3yp3KLhpRwDycZsyipIsa%2F%2Ft1AdZxQm%2FsmlJmfjuUFA5HpM52X%2FMqfEnJWUquOIKHMPyVBHbuC89%2B1KFPxYyhR8D1mnmfGWdWoYK56%2B%2BQm3A7Quo43CiPRcRwaBAmmz1RAuWpGNuXbyGl0mKl7j3DttBtq87C4DBVggximE2W1ROydalnZc9x923mqhpesdIzq6iK%2BfV1PSIhopL0ZvDU1bYlqs%2F8vTPOVRYQYkl0oZIC%2F98QO5SvGDezhxEiD67EK7QpiiVfiAFr4HEd4RMPnZXeuql1i%2BOfUXrwEIV3NP0TjzPWW3reZLeAowhXC3xe8LEJvyNckcq5sFwaXYQ8Gy%2FFHtlVFdlIU6yjORE0ThCudtzZx8o9zo63xuIDtCPOKi0BF86j8but9Su%2FP6heYto%2Bac%2BmsepB4uwOMzYf2UX7UYxu5mEL7VSqTuEKgvBD8Q7W24aVJe2XIPR%2B4UcbuCSIdQuTkls3c4FRzbxvyPTjvuR5BEOidHDM0T9njzqm1E6xql57OZGR4K5%2B5QTLWsoelhTDjvM3WBjqkAcEF1ro2%2BHd4zJT9yxukqqDr3TFN3Py7NpC17SjsQ7z%2FF41nawT9mCCyEZxBSVLgfhWefSYagipy9aAIf4k50pWGVKO8S3yA%2F%2B3SGRyZHiX8JDQh9qcms8jj%2FDTKQotMA13fYeVobhLv17FgE8CI5mqMsGU9Gk7A%2FY4534CCsToKY7f26U0Y8NgmrI%2FlT0xVNjBZH1dANKpmIWlpCWjCr%2F89058%2B&X-Amz-Signature=be85c465e9e12feddbd190d68d598a99f9848f37dd0dea93e78e3ab91c4c21b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RHKVSBAA%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115834Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJHMEUCIQCP4w4ShFtGd3ByBT3c5iOHiII%2FFEW4eutNYzyZ4kEzEwIgfU1N0qD97JAq5k%2B5QYqszhyMS39gi1oQE9m92v5Q0aUqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDqx5Jr6fNXKEoW3LCrcA%2BbRK5htnveJThNItH5%2FMaY9qbQ69x09brnTcTPQFiI%2FR9w076V1HvWXtS8E2FFTKluz%2Fn5tapmXqsBG2dxl3wSLfJ5aJg8S5jsBWnAO5gUJiizPypqt6mmMia9%2FjgYiAb9TXGIBS0FE0EiD0Cjh8b3YEN%2BGjoXmke4Mq8n30cZf8wPXyV6V1kNjxOCEVfLspu1Dc4P8n6CptFt06jPXJhy8ysr4fnTwWVLuU62TQg0KcO1hYV60fUkH98QAR8v4jOi%2BM7cp7wOi6P529Rn%2B2wbeyt4DPWJmH%2Bsm45gD0NwmbjehhnEXIaJ4S0Fv6sHP%2FxGhSfMEZlnLhMmFBRbysp4t8QkdZfBfuGVlw63i61zA512KiHxh5lWhU33FEsre9VTQRy9tF%2FYQiXAL7Te02pqm2IrYPBK2goZbT6kCN3iHija2tK2cvkdgWw%2FhvXxJLow%2FXKkjuzw5naiAiSRlNRLuAKO9FWV5G%2Bk%2BCz8tza%2BJOR2GxF%2FIl6KmzWweOvlBAOeWqCLaMWmCg%2FRxwkZTNC4FefajcXcjvnn2C9GBQ5%2BpFow68u5q1K17O9qTYY%2Bz5WS9Wg%2B2wHOsc64tXvoocJ2drAUBlzNLwX8PTEGEScVVQC6sC%2FCJRfNcLDubMIu7zdYGOqUBz4Bl75H%2Fc7u6IDPq6hvH%2FwlAJuYd2eF3idb28Ua4ZH7H6mKMrg2iDmoJ17Qp%2BOJEHkG6ebvJpGwJiXcWvGz4JMiyJ5JuHHfIMrZipToAIgWtv6kzH9CIPLs5O0HW1JXegCuEP%2FYQBLO%2FoX69zrmMc%2FYeTpSgOKQHgaMyh2e0GFdppEh%2FqyeY9yiZsZ0FnDaQVzzrx%2F%2FVflyRbepVi77RNWfbY3Tw&X-Amz-Signature=d4b34c7c3bf967adc1fd6065a6a7d41564c994dab30eece725106409b970c283&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGR7JZJI%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115834Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJHMEUCIFkM8ruXIh3EnS6354NaTfVrA4JZBL15CP8WHqsc%2FJpjAiEAl3Dnl9vGs2Q9NfzUiYSJBWJjBsXqtVVkMHEUg5QFQ1UqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHh6LwM6QbJvMQdEqyrcA%2BdqMgrW%2FW31RBkJ9h8K1ct1pmvC2tInQdxI9leyRO4Isj55%2B1KnIHiwciGyzz8K7uKOwRXsP46hrA7XLepKqho32P1%2FSidZCg0tUDxpL2w%2BpvOiBYsOTzw2yUJB7upoYGShFdd6KqSeVdb4qqMJ0mBcBIvAzrsKiapYmt7M3C2AYeYgXwFCyflTBakt4BvXXk1BC3TJfMKNclY%2Bwz%2FF7hYHP0wFhTH27QSPP6jP9cd36sw008OHc1lPohecKttxYTaQuVoNk%2Bfr4NJ3q2jRmo97PCyS9e6kB%2BXC%2FOPYCL90sSHZvsYYtAIVbVfznluK2jHWf7wBuNnxk9O4kw4abW5R3oypZzT1hOWzTDxAdAI1rN2hLVv2V2hkHx5FdyRyPOdveZfT3DSvhjBOxkTK4f3oU6nSc%2FkuGEvHLFHuuOX8dxAxjO2e6UWq4iaVMHSnM1oHnHc2WBF2QqHddEOidSYUoVcaItcQQgi45BT2c%2BDvdsH5EWPcCRSjL5Ury7SdfW4C5ggsQ9yTB3wUXexPUw13jNXA80KxEiyO2fPtJO3A0WIMO%2BHI0Q0sVIoVaJmSs0AJlZ2zkgG1267gL5BBWhGz6Mc%2FV%2Bp%2FcVVqgD4jq8l2NbzxXxgR6ixwicK1MMW8zdYGOqUBHP1cryweobnZHc7oC%2BxLtLU4AN1Z25R8jYqSUTz%2Fn7j99WIWRq1hbrhzLDE%2F6AsZqkTMa3by4T%2BfVcy6NIJB3vpjW6nNEFlPpNoV%2BMz%2FjqO2kMTaTW0IhUMlifXGwi8E1JSZGorTV8St3hfHTMISjv9BP4WLQhTLGsXTRjFbmJ1msEj8DV0x3ADTA%2FHPXDuf4UWOnyn3Mc9p%2FW2%2BhH7SLacl6XZR&X-Amz-Signature=e472b88cdbb97c30d270286a0e4518ff1694685501ef828b30ae70d1803ed18d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGR7JZJI%2F20261017%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261017T115834Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJHMEUCIFkM8ruXIh3EnS6354NaTfVrA4JZBL15CP8WHqsc%2FJpjAiEAl3Dnl9vGs2Q9NfzUiYSJBWJjBsXqtVVkMHEUg5QFQ1UqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHh6LwM6QbJvMQdEqyrcA%2BdqMgrW%2FW31RBkJ9h8K1ct1pmvC2tInQdxI9leyRO4Isj55%2B1KnIHiwciGyzz8K7uKOwRXsP46hrA7XLepKqho32P1%2FSidZCg0tUDxpL2w%2BpvOiBYsOTzw2yUJB7upoYGShFdd6KqSeVdb4qqMJ0mBcBIvAzrsKiapYmt7M3C2AYeYgXwFCyflTBakt4BvXXk1BC3TJfMKNclY%2Bwz%2FF7hYHP0wFhTH27QSPP6jP9cd36sw008OHc1lPohecKttxYTaQuVoNk%2Bfr4NJ3q2jRmo97PCyS9e6kB%2BXC%2FOPYCL90sSHZvsYYtAIVbVfznluK2jHWf7wBuNnxk9O4kw4abW5R3oypZzT1hOWzTDxAdAI1rN2hLVv2V2hkHx5FdyRyPOdveZfT3DSvhjBOxkTK4f3oU6nSc%2FkuGEvHLFHuuOX8dxAxjO2e6UWq4iaVMHSnM1oHnHc2WBF2QqHddEOidSYUoVcaItcQQgi45BT2c%2BDvdsH5EWPcCRSjL5Ury7SdfW4C5ggsQ9yTB3wUXexPUw13jNXA80KxEiyO2fPtJO3A0WIMO%2BHI0Q0sVIoVaJmSs0AJlZ2zkgG1267gL5BBWhGz6Mc%2FV%2Bp%2FcVVqgD4jq8l2NbzxXxgR6ixwicK1MMW8zdYGOqUBHP1cryweobnZHc7oC%2BxLtLU4AN1Z25R8jYqSUTz%2Fn7j99WIWRq1hbrhzLDE%2F6AsZqkTMa3by4T%2BfVcy6NIJB3vpjW6nNEFlPpNoV%2BMz%2FjqO2kMTaTW0IhUMlifXGwi8E1JSZGorTV8St3hfHTMISjv9BP4WLQhTLGsXTRjFbmJ1msEj8DV0x3ADTA%2FHPXDuf4UWOnyn3Mc9p%2FW2%2BhH7SLacl6XZR&X-Amz-Signature=3b9fa2c0b769b1aafab11e55fa76978fcb07b430d747b539d8fcd6b263ea5d61&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
