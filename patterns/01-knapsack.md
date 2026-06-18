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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y7YAFQ6Z%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114943Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICGM2RFpc6TvxIVycmFK7%2F4HxOOaGTkCYnwj1uiyDnx5AiAReYXuS0lTqSZF2RbxVnizHksReumFHE6%2BbmmKzoJpHiqIBAij%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMdxV97Pc8ODEuxQwFKtwDW49tpds7Vw2e%2B0RUrVzP68KLY%2FkxE68rdC3EBgfOZo3cEJ6%2BAuiAH%2F7tr3xtQgsUDYiypH3HUBmrfqPH9Ag%2BF81oeHTgTyYpQIw%2BpgT6ilgCqlDWNDR36ezLXFDPwedzSbI2nHLw9%2FZCfoVS5aa6Ngn2D0ZUljMJaEdH2bioWhX%2Fuo%2Fvp8l%2Fe451SJ29br%2B%2BZAEb0srC4hQ8NGLghvnpRTC4fyIFfgGZa52MfYRmEojT7MNP%2BRCqegGRXXr1LsfMfTB4WG6Hz9KRfRr%2BrXiEu5J66CDlco7AbGvlUJhkOIsLpmRuZRp%2BeyKXMGjWE0yE1RYj9IeP5HAlEOI8xp57jkK0dEe5V1%2FC6qZYLKt818D1cOAJPcnopWw%2B8WElkmbBj3l7h12TKYu9z%2FXBATcUqxCB8zbHI%2B1vflFLGWCv8MpRDPdwIGSTtRiXypLJJJ4L9zlEJY1bNKXgj2alKW32IySpSaXc8Z3UMgz6HtGSnpREMMjB8Z%2Ff0uNUn69WHEGAyMSKrTEAC5RR%2F239%2FjXudtcXWMpok6JDF8EypWlctSEOP4F6WR%2Bb9CcqTpHAMlvEPV1pv6ZHE7J%2B8MBNYr%2B3B%2BNA9oKDtxs6X2T%2FlTLCFzNHSOV0hwHSdM2MVTIwufrO0QY6pgG%2B3o6Sme2Br8NVH6rkyr9PfTDAOsDkfY0a%2FTzG6NVBOft6KPDEuaJ%2BW0BmtqJvDscKP9fr7%2FN2jk%2F721FteiJ1%2BAssTSIsMdastDmC%2Bc8Ul4OZ5o%2FMrcZQmUxc5Jcpwxptl%2FuwzsZaDWOa398c%2FCcIfktWwSj4LJ5EXuD8JOZDrhaEwiARss%2FKNASHx3ZSXQ6GtsXVjvVgnJ4QETHc1AwhBz5h8QGo&X-Amz-Signature=9954b72c51cde00bff74686e4a963cb76aaeb9b7e6180c083efd83e2d1e2fbd7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y7YAFQ6Z%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114943Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICGM2RFpc6TvxIVycmFK7%2F4HxOOaGTkCYnwj1uiyDnx5AiAReYXuS0lTqSZF2RbxVnizHksReumFHE6%2BbmmKzoJpHiqIBAij%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMdxV97Pc8ODEuxQwFKtwDW49tpds7Vw2e%2B0RUrVzP68KLY%2FkxE68rdC3EBgfOZo3cEJ6%2BAuiAH%2F7tr3xtQgsUDYiypH3HUBmrfqPH9Ag%2BF81oeHTgTyYpQIw%2BpgT6ilgCqlDWNDR36ezLXFDPwedzSbI2nHLw9%2FZCfoVS5aa6Ngn2D0ZUljMJaEdH2bioWhX%2Fuo%2Fvp8l%2Fe451SJ29br%2B%2BZAEb0srC4hQ8NGLghvnpRTC4fyIFfgGZa52MfYRmEojT7MNP%2BRCqegGRXXr1LsfMfTB4WG6Hz9KRfRr%2BrXiEu5J66CDlco7AbGvlUJhkOIsLpmRuZRp%2BeyKXMGjWE0yE1RYj9IeP5HAlEOI8xp57jkK0dEe5V1%2FC6qZYLKt818D1cOAJPcnopWw%2B8WElkmbBj3l7h12TKYu9z%2FXBATcUqxCB8zbHI%2B1vflFLGWCv8MpRDPdwIGSTtRiXypLJJJ4L9zlEJY1bNKXgj2alKW32IySpSaXc8Z3UMgz6HtGSnpREMMjB8Z%2Ff0uNUn69WHEGAyMSKrTEAC5RR%2F239%2FjXudtcXWMpok6JDF8EypWlctSEOP4F6WR%2Bb9CcqTpHAMlvEPV1pv6ZHE7J%2B8MBNYr%2B3B%2BNA9oKDtxs6X2T%2FlTLCFzNHSOV0hwHSdM2MVTIwufrO0QY6pgG%2B3o6Sme2Br8NVH6rkyr9PfTDAOsDkfY0a%2FTzG6NVBOft6KPDEuaJ%2BW0BmtqJvDscKP9fr7%2FN2jk%2F721FteiJ1%2BAssTSIsMdastDmC%2Bc8Ul4OZ5o%2FMrcZQmUxc5Jcpwxptl%2FuwzsZaDWOa398c%2FCcIfktWwSj4LJ5EXuD8JOZDrhaEwiARss%2FKNASHx3ZSXQ6GtsXVjvVgnJ4QETHc1AwhBz5h8QGo&X-Amz-Signature=88d5fb798b13a50e10a3d99bfe052038f0b4c39de4dfe54248e3851c69a46d3f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y7YAFQ6Z%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114943Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICGM2RFpc6TvxIVycmFK7%2F4HxOOaGTkCYnwj1uiyDnx5AiAReYXuS0lTqSZF2RbxVnizHksReumFHE6%2BbmmKzoJpHiqIBAij%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMdxV97Pc8ODEuxQwFKtwDW49tpds7Vw2e%2B0RUrVzP68KLY%2FkxE68rdC3EBgfOZo3cEJ6%2BAuiAH%2F7tr3xtQgsUDYiypH3HUBmrfqPH9Ag%2BF81oeHTgTyYpQIw%2BpgT6ilgCqlDWNDR36ezLXFDPwedzSbI2nHLw9%2FZCfoVS5aa6Ngn2D0ZUljMJaEdH2bioWhX%2Fuo%2Fvp8l%2Fe451SJ29br%2B%2BZAEb0srC4hQ8NGLghvnpRTC4fyIFfgGZa52MfYRmEojT7MNP%2BRCqegGRXXr1LsfMfTB4WG6Hz9KRfRr%2BrXiEu5J66CDlco7AbGvlUJhkOIsLpmRuZRp%2BeyKXMGjWE0yE1RYj9IeP5HAlEOI8xp57jkK0dEe5V1%2FC6qZYLKt818D1cOAJPcnopWw%2B8WElkmbBj3l7h12TKYu9z%2FXBATcUqxCB8zbHI%2B1vflFLGWCv8MpRDPdwIGSTtRiXypLJJJ4L9zlEJY1bNKXgj2alKW32IySpSaXc8Z3UMgz6HtGSnpREMMjB8Z%2Ff0uNUn69WHEGAyMSKrTEAC5RR%2F239%2FjXudtcXWMpok6JDF8EypWlctSEOP4F6WR%2Bb9CcqTpHAMlvEPV1pv6ZHE7J%2B8MBNYr%2B3B%2BNA9oKDtxs6X2T%2FlTLCFzNHSOV0hwHSdM2MVTIwufrO0QY6pgG%2B3o6Sme2Br8NVH6rkyr9PfTDAOsDkfY0a%2FTzG6NVBOft6KPDEuaJ%2BW0BmtqJvDscKP9fr7%2FN2jk%2F721FteiJ1%2BAssTSIsMdastDmC%2Bc8Ul4OZ5o%2FMrcZQmUxc5Jcpwxptl%2FuwzsZaDWOa398c%2FCcIfktWwSj4LJ5EXuD8JOZDrhaEwiARss%2FKNASHx3ZSXQ6GtsXVjvVgnJ4QETHc1AwhBz5h8QGo&X-Amz-Signature=8fa3319dc1a2173ee765c6a9141519d8447e8cade8b17db8489813ed09d5b529&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZ74UAEJ%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114943Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAp91W8WIAICDlDexX6zvenzS169iDEf16a%2BRPtDoMrgAiEAv454mgXcWXAo5wF%2FpKiHYOnr2n0GBd6Eu4fI8%2FfYi0QqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM%2FedF5YdHfVgxeZQCrcAxcNmmMkY0u4JnrnB9d7nWiqTIRaSyoyN8Lpg%2B8sLuf17aXnUn4zjFbTaN5al%2FblTusOeztM7BO2zCJibUDZXqKahCKrBk9VbkozZoZm1QqbIVGiYste7PJMBV5UtrQ3yciHw%2FKBXEgr3wEHXh9QaIFt%2B6fLXMosY2pJ%2FqrUFoPtACuZS8DKdVxiIvW%2F%2F7%2BMMXvkRJge2pH65apyt9lcmYKXaGWCYPI6nvL4%2FexABYCWJEuNmeQcIqMtmU54Y4sqNtwzknZeeqRtvPfqiHZcRgNjSkCZa5IUNaQZWJhH3i5QlJPQuCVA2t54sI3fX1rvK5sdI4IJxdArjgsSVnaEGalgajxrmLNd2yz87PrDDW9hDDTR7Arweowq31shyepO0ff4U6ECUTdc1H%2Fo6vamLtwwOvlbeXeK5%2BeRrtel0gW%2FZeIvyPDLeFOIIH0konf3p7tKYGxak8HO%2BsYJ8GObZBd%2BY40P1lNtrkQlasUZyZ8ES8WFyhRso7Q7Jw1%2BZ%2BnbntW1I%2FcLmsOCYyjnj5Iw2FztLNzOPbbh1mva7FDSy2UiutUN6fqDpouCuwktK7hf2cJxVW7cWYlml2f3ie9fo9c%2FJjPE8UNYOi9Ef%2BCsh29%2Fu1Ppv3IlYhM8pAInMPu5ztEGOqUBUJ%2FvPVkZ0s8bdULdnMqo5Ey%2BxYtu5OundUdojHfAqLSPl%2FzABpTjuB%2FR0%2F9VuShrHI4oo4FhbCtwmCIQQyqRLjAovnQ3S445WEkg2OsTwcMcGTFBEJzUaLadvH9V4Ar8G4tnaSMlDbHIDp%2BXoI9adNiLvhPbNG8y829FVle9ldabg2j8UOfvDBw6sUZr%2Byk5Pmhdd4aS0RMbSwxMgaWj%2FC74HWN5&X-Amz-Signature=faa641f049cdc5cdcb9b3a6b1925c6c2008713a8d25c7e62d091539a7bb3d9f8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZ74UAEJ%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114943Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAp91W8WIAICDlDexX6zvenzS169iDEf16a%2BRPtDoMrgAiEAv454mgXcWXAo5wF%2FpKiHYOnr2n0GBd6Eu4fI8%2FfYi0QqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM%2FedF5YdHfVgxeZQCrcAxcNmmMkY0u4JnrnB9d7nWiqTIRaSyoyN8Lpg%2B8sLuf17aXnUn4zjFbTaN5al%2FblTusOeztM7BO2zCJibUDZXqKahCKrBk9VbkozZoZm1QqbIVGiYste7PJMBV5UtrQ3yciHw%2FKBXEgr3wEHXh9QaIFt%2B6fLXMosY2pJ%2FqrUFoPtACuZS8DKdVxiIvW%2F%2F7%2BMMXvkRJge2pH65apyt9lcmYKXaGWCYPI6nvL4%2FexABYCWJEuNmeQcIqMtmU54Y4sqNtwzknZeeqRtvPfqiHZcRgNjSkCZa5IUNaQZWJhH3i5QlJPQuCVA2t54sI3fX1rvK5sdI4IJxdArjgsSVnaEGalgajxrmLNd2yz87PrDDW9hDDTR7Arweowq31shyepO0ff4U6ECUTdc1H%2Fo6vamLtwwOvlbeXeK5%2BeRrtel0gW%2FZeIvyPDLeFOIIH0konf3p7tKYGxak8HO%2BsYJ8GObZBd%2BY40P1lNtrkQlasUZyZ8ES8WFyhRso7Q7Jw1%2BZ%2BnbntW1I%2FcLmsOCYyjnj5Iw2FztLNzOPbbh1mva7FDSy2UiutUN6fqDpouCuwktK7hf2cJxVW7cWYlml2f3ie9fo9c%2FJjPE8UNYOi9Ef%2BCsh29%2Fu1Ppv3IlYhM8pAInMPu5ztEGOqUBUJ%2FvPVkZ0s8bdULdnMqo5Ey%2BxYtu5OundUdojHfAqLSPl%2FzABpTjuB%2FR0%2F9VuShrHI4oo4FhbCtwmCIQQyqRLjAovnQ3S445WEkg2OsTwcMcGTFBEJzUaLadvH9V4Ar8G4tnaSMlDbHIDp%2BXoI9adNiLvhPbNG8y829FVle9ldabg2j8UOfvDBw6sUZr%2Byk5Pmhdd4aS0RMbSwxMgaWj%2FC74HWN5&X-Amz-Signature=859b94edd30c4cd13d9552c892258b5534898f8d2069547c4545cf03906fa054&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZ74UAEJ%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114943Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAp91W8WIAICDlDexX6zvenzS169iDEf16a%2BRPtDoMrgAiEAv454mgXcWXAo5wF%2FpKiHYOnr2n0GBd6Eu4fI8%2FfYi0QqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM%2FedF5YdHfVgxeZQCrcAxcNmmMkY0u4JnrnB9d7nWiqTIRaSyoyN8Lpg%2B8sLuf17aXnUn4zjFbTaN5al%2FblTusOeztM7BO2zCJibUDZXqKahCKrBk9VbkozZoZm1QqbIVGiYste7PJMBV5UtrQ3yciHw%2FKBXEgr3wEHXh9QaIFt%2B6fLXMosY2pJ%2FqrUFoPtACuZS8DKdVxiIvW%2F%2F7%2BMMXvkRJge2pH65apyt9lcmYKXaGWCYPI6nvL4%2FexABYCWJEuNmeQcIqMtmU54Y4sqNtwzknZeeqRtvPfqiHZcRgNjSkCZa5IUNaQZWJhH3i5QlJPQuCVA2t54sI3fX1rvK5sdI4IJxdArjgsSVnaEGalgajxrmLNd2yz87PrDDW9hDDTR7Arweowq31shyepO0ff4U6ECUTdc1H%2Fo6vamLtwwOvlbeXeK5%2BeRrtel0gW%2FZeIvyPDLeFOIIH0konf3p7tKYGxak8HO%2BsYJ8GObZBd%2BY40P1lNtrkQlasUZyZ8ES8WFyhRso7Q7Jw1%2BZ%2BnbntW1I%2FcLmsOCYyjnj5Iw2FztLNzOPbbh1mva7FDSy2UiutUN6fqDpouCuwktK7hf2cJxVW7cWYlml2f3ie9fo9c%2FJjPE8UNYOi9Ef%2BCsh29%2Fu1Ppv3IlYhM8pAInMPu5ztEGOqUBUJ%2FvPVkZ0s8bdULdnMqo5Ey%2BxYtu5OundUdojHfAqLSPl%2FzABpTjuB%2FR0%2F9VuShrHI4oo4FhbCtwmCIQQyqRLjAovnQ3S445WEkg2OsTwcMcGTFBEJzUaLadvH9V4Ar8G4tnaSMlDbHIDp%2BXoI9adNiLvhPbNG8y829FVle9ldabg2j8UOfvDBw6sUZr%2Byk5Pmhdd4aS0RMbSwxMgaWj%2FC74HWN5&X-Amz-Signature=9673d02da2b503fb47a3a142314451e7b404f4c6ff5c44235cebaa77fb1f8772&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZ74UAEJ%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114943Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAp91W8WIAICDlDexX6zvenzS169iDEf16a%2BRPtDoMrgAiEAv454mgXcWXAo5wF%2FpKiHYOnr2n0GBd6Eu4fI8%2FfYi0QqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM%2FedF5YdHfVgxeZQCrcAxcNmmMkY0u4JnrnB9d7nWiqTIRaSyoyN8Lpg%2B8sLuf17aXnUn4zjFbTaN5al%2FblTusOeztM7BO2zCJibUDZXqKahCKrBk9VbkozZoZm1QqbIVGiYste7PJMBV5UtrQ3yciHw%2FKBXEgr3wEHXh9QaIFt%2B6fLXMosY2pJ%2FqrUFoPtACuZS8DKdVxiIvW%2F%2F7%2BMMXvkRJge2pH65apyt9lcmYKXaGWCYPI6nvL4%2FexABYCWJEuNmeQcIqMtmU54Y4sqNtwzknZeeqRtvPfqiHZcRgNjSkCZa5IUNaQZWJhH3i5QlJPQuCVA2t54sI3fX1rvK5sdI4IJxdArjgsSVnaEGalgajxrmLNd2yz87PrDDW9hDDTR7Arweowq31shyepO0ff4U6ECUTdc1H%2Fo6vamLtwwOvlbeXeK5%2BeRrtel0gW%2FZeIvyPDLeFOIIH0konf3p7tKYGxak8HO%2BsYJ8GObZBd%2BY40P1lNtrkQlasUZyZ8ES8WFyhRso7Q7Jw1%2BZ%2BnbntW1I%2FcLmsOCYyjnj5Iw2FztLNzOPbbh1mva7FDSy2UiutUN6fqDpouCuwktK7hf2cJxVW7cWYlml2f3ie9fo9c%2FJjPE8UNYOi9Ef%2BCsh29%2Fu1Ppv3IlYhM8pAInMPu5ztEGOqUBUJ%2FvPVkZ0s8bdULdnMqo5Ey%2BxYtu5OundUdojHfAqLSPl%2FzABpTjuB%2FR0%2F9VuShrHI4oo4FhbCtwmCIQQyqRLjAovnQ3S445WEkg2OsTwcMcGTFBEJzUaLadvH9V4Ar8G4tnaSMlDbHIDp%2BXoI9adNiLvhPbNG8y829FVle9ldabg2j8UOfvDBw6sUZr%2Byk5Pmhdd4aS0RMbSwxMgaWj%2FC74HWN5&X-Amz-Signature=450fffb4f02779f22fde3ccdb74b1df40262597c452d098e63550c4709086f70&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667O7EMK4Y%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAqbyc5SYlW8bmINDGC%2B8isN2%2Frs6PM90zUcU%2BlngpMCAiEA575U1AW92x2n8fFHFLHBBhbwcwXi%2FzU8aC82RlLDd%2FIqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCe22g4T11s%2F%2FDZXIyrcA01uSTLOfrLi5Jn77QmZh9aV31KV2Kv3EiLLeM3M9K8M36D%2Fqp5asrH2f8QWrMvr4PiMNOKiNnc20kmmfzIjSN2jCIIucNH0wQcIp84T5ov%2BFQclJ5zaGNYIjjb8EKpqitQhfSKpAEkZ%2BTBp3tXxicaR2ucamY9ZTTE09cp6iDZaxwHwY2dqQ9rD1d%2BFeZJ8rMs%2BDBk6yP8W4eLid1d4gsl8WeldhjfH21hhFlJrA0%2Fxg0RXCZsRXYzWQIdO7MVRmQFIcbyL8oY77E3NQAU1%2FBw6djv5qeIzJVr%2Fk5iP1SY2eNXH2j7Y75RRTZa0w%2ByFHXko35XMHSKZw1TPYNsp8e1YMpG8PPkMZtyrk6nW9zTTHfrZXzAfnBIMstuHPS4N%2Fo3ruDy1%2FLPRaaW58oWB84bwKiT8GWzVP4QbD%2FNnjnJuz%2FtZBgcqesSNuyqnXpAndGUjFZ7JnbxOmlBR8stMjntd8BoS0e8pWcyY3zAD7xRav5ZUrm1sydT4SUHTtJlFym%2Bi2VQBMPofLu6yo4oo6FVBSsq4kI3cgo7bPCu6SePvV7PizlW6Gj%2Fngw8frmqWfrAYfRviW2D7562v50Vgj6yoONzx2sdTHvruJ07Mh7G09bRFY4eHz6GS%2FfBYMPa6ztEGOqUBerjfWWyfns%2F2I5zxwua1Z2hsZRy1VdP7rZZaeeq9UbqXht0%2BKLaVkU%2BTrWbLuaXhJdSvNKl2M56K4%2FS0QKCj%2Fe7HAbxqPzfo%2BM0a2TXZ5WGI%2FA0msJUhwzq2AUJQd4%2Bg2NdZiC0BGZD%2FLvMQW4pON3W62puAlc6CM4KaVhwBzDUP2LcmDzXDDP1o%2F9tpN6HQczp7oZXUpWGqxWXaGsbtoXWPfcfb&X-Amz-Signature=f19256d1ac3e7109406ce2ba04523d3ea918f9f6320dc101c8657aed9d597a91&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QZSMWNRN%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGsBO18trzMLRS8d0wv%2BFO5%2Brcl1SXQ%2B%2F495JWHAp1XSAiBvQiMGfcxMwc%2FS9pfZoijYF9Yjg4wKqHPhxBq7hRwB4CqIBAih%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM16tjhXqQG5P1GRFlKtwDnT2YqhvhkV1fERd%2BoZBAA3VrKij%2BOGAAH1ercCeqSUgbekzMdNsYa%2BbN0cjaJU45W0azl2axc6vIh44B0UVGw6JRCUwVMUwBYDDSsHCddKk%2Fw9ftGbOphcErSOUBpoTOj1bNCfNAJFR%2FJbgkVw3NawsWSHVioeW4E9F3FEqjb%2BNR4ZB7vV8N9FBHPU5zFHMIIQ9bnjLqa421a4N8Hbta1Hc%2FmzTcWjfg2jJE1rPgr7Vm7A81TgHZetmP8Nqkyj900b0LGsRYcpsMslaOdM5Bp8LxMB%2BA5KCSAd6CaEO9LvpJia782qSH1TS4RM6apQqmqq5wbTqove9%2FAJRJcb8bwezaf1pMV8xw0dhkxRG7dJxhLhwMyKhHoXCqFYfD8%2FKpY6bO9WC4bPqOUNJfgfbflgXJD2E14ributnh7j%2FU70ThTJ9MSZt97ovcjt0J8gI78%2BRrDbdIF36LFm1Xu3RQ9m9HXHeRbdxv44u%2BMpGuMCekRRSjp%2FainEy6XMZsnrIR39EDZRtZLmwMe9HUBIzNB2gaarSXdnXKbXpUOmt6CPD0IKiQiElsareUOe9dD2K03jnXWuURJGaW7SXHiFUA2Tft2heEmLnM3KXkUGAqjdIVQuhbYEGZWxwJbnEwzbvO0QY6pgG6qL3qpECnH5V%2FuWi0SRA5yHaKnuSMvA4cFX03fmyuq2882EPQoYBLqhsnf2JtL5SuLJp4HRpum9zb%2FOamXs%2BiKPITg7Aj6%2B%2FiMSn0NYxBlg3Ju8GLqj35ncvR0ZQwTNA4Ge5Zw9oMWCuEQXtsOy79KbOSWBjYuHdqEEzhHeoLI%2FdnjbaXZ0excexoC2C8X98JdQgsxnaibNgxkfK6R%2FL0G4fSPlXe&X-Amz-Signature=2cf237e9170de2bbce8aa58495a6ee61aaa9b27bd5ba20f67cfc2737bc47168e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QZSMWNRN%2F20260618%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260618T114944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGsBO18trzMLRS8d0wv%2BFO5%2Brcl1SXQ%2B%2F495JWHAp1XSAiBvQiMGfcxMwc%2FS9pfZoijYF9Yjg4wKqHPhxBq7hRwB4CqIBAih%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM16tjhXqQG5P1GRFlKtwDnT2YqhvhkV1fERd%2BoZBAA3VrKij%2BOGAAH1ercCeqSUgbekzMdNsYa%2BbN0cjaJU45W0azl2axc6vIh44B0UVGw6JRCUwVMUwBYDDSsHCddKk%2Fw9ftGbOphcErSOUBpoTOj1bNCfNAJFR%2FJbgkVw3NawsWSHVioeW4E9F3FEqjb%2BNR4ZB7vV8N9FBHPU5zFHMIIQ9bnjLqa421a4N8Hbta1Hc%2FmzTcWjfg2jJE1rPgr7Vm7A81TgHZetmP8Nqkyj900b0LGsRYcpsMslaOdM5Bp8LxMB%2BA5KCSAd6CaEO9LvpJia782qSH1TS4RM6apQqmqq5wbTqove9%2FAJRJcb8bwezaf1pMV8xw0dhkxRG7dJxhLhwMyKhHoXCqFYfD8%2FKpY6bO9WC4bPqOUNJfgfbflgXJD2E14ributnh7j%2FU70ThTJ9MSZt97ovcjt0J8gI78%2BRrDbdIF36LFm1Xu3RQ9m9HXHeRbdxv44u%2BMpGuMCekRRSjp%2FainEy6XMZsnrIR39EDZRtZLmwMe9HUBIzNB2gaarSXdnXKbXpUOmt6CPD0IKiQiElsareUOe9dD2K03jnXWuURJGaW7SXHiFUA2Tft2heEmLnM3KXkUGAqjdIVQuhbYEGZWxwJbnEwzbvO0QY6pgG6qL3qpECnH5V%2FuWi0SRA5yHaKnuSMvA4cFX03fmyuq2882EPQoYBLqhsnf2JtL5SuLJp4HRpum9zb%2FOamXs%2BiKPITg7Aj6%2B%2FiMSn0NYxBlg3Ju8GLqj35ncvR0ZQwTNA4Ge5Zw9oMWCuEQXtsOy79KbOSWBjYuHdqEEzhHeoLI%2FdnjbaXZ0excexoC2C8X98JdQgsxnaibNgxkfK6R%2FL0G4fSPlXe&X-Amz-Signature=0d18ca518b0874b1617bec1303c1707bec2a968f33b234c2f985a877fdc0fc9a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
