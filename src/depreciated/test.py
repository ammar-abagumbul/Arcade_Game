def find_shapes(space):
    visited = [[False] * len(space[0]) for _ in range(len(space))]
    shapes = []
    
    def dfs(i, j):
        if i < 0 or i >= len(space) or j < 0 or j >= len(space[0]) or visited[i][j] or space[i][j] == 0:
            return []
        
        visited[i][j] = True
        current_rect = [{"x": j, "y": i, "width": 1, "height": 1}]
        
        right_rects = dfs(i, j + 1)
        if right_rects:
            for rect in right_rects:
                if rect["y"] == i and rect["height"] == 1:
                    current_rect[0]["width"] += rect["width"]
                else:
                    current_rect.append(rect)
        
        down_rects = dfs(i + 1, j)
        if down_rects:
            for rect in down_rects:
                if rect["x"] == j and rect["width"] == 1:
                    current_rect[0]["height"] += rect["height"]
                else:
                    current_rect.append(rect)
        
        return current_rect
    
    for i in range(len(space)):
        for j in range(len(space[i])):
            if space[i][j] == 1 and not visited[i][j]:
                rects = dfs(i, j)
                if rects:
                    shapes.append((rects[0]["x"], rects[0]["y"], rects))
    
    return {
        "shapes": [(shape[0], shape[1]) for shape in shapes],
        "rectangles": [shape[2] for shape in shapes]
    }

space = [
    [1, 1, 0, 0],
    [1, 1, 0, 1],
    [0, 0, 1, 1],
    [0, 0, 1, 1]
]

result = find_shapes(space)
print(result)