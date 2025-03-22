def bfs(graph, start_node, end_node):
    visited = []  # List to keep track of visited nodes.
    queue = []  # Initialize a queue
    
    visited.append(start_node)
    queue.append(start_node)

    print("\nProcessing node:", start_node)
    print("Visited:", visited)

    while queue:
        s = queue.pop(0)
        print("\nNode pop:", s)
        
        # Stop BFS when we reach the end_node
        if s == end_node:
            print("\nReached the end node:", end_node)
            return visited

        for neighbour in graph[s]:
            print("Neighbour node:", neighbour)

            if neighbour not in visited:
                visited.append(neighbour)
                queue.append(neighbour)

                print("Node add to Queue:", neighbour)
                print("Visited:", visited)
    
    print("\nQueue Empty")
    return visited

# Example graph
graph = {
    'A' : ['B','C'],
    'B' : ['D', 'E'],
    'C' : ['F'],
    'D' : [],
    'E' : ['F'],
    'F' : []
}

# Driver Code
start_node = input("Enter the First node from A to F : ")
end_node = input("Enter the last node : ")
if start_node in graph :
    if end_node in graph :
        print("\nBFS Traversal:", bfs(graph, start_node,end_node))
    else :
        print("Invalid target node")
else :
    print("Inavlid start node enter")
