def find_fire_spread(n, h, connections):
    # Initially, only checkposts 0 and h are on fire at time 0
    fire_times = [float('inf')] * n
    fire_times[0] = 0  # Fire starts at checkpost 0
    fire_times[h] = 0  # Fire also starts at checkpost h
    
    # Sort connections by time for chronological processing
    connections.sort(key=lambda x: x[2])
    
    # Process each connection in chronological order
    for x, y, time in connections:
        # Check if either checkpost is on fire when connection is made
        if fire_times[x] <= time:
            # If x is on fire, y catches fire at connection time
            fire_times[y] = min(fire_times[y], time)
        if fire_times[y] <= time:
            # If y is on fire, x catches fire at connection time
            fire_times[x] = min(fire_times[x], time)
    
    # Collect all checkposts that caught fire
    burned = []
    for i in range(n):
        if fire_times[i] != float('inf'):
            burned.append(i)
    
    return burned


def main():
    # Read input
    n = int(input())  # Number of checkposts
    h = int(input())  # Second initial fire point
    x = int(input())  # Number of connections
    cols = int(input())  # Always 3 (x, y, time)
    
    # Read connections
    connections = []
    for _ in range(x):
        connection = list(map(int, input().split()))
        connections.append(connection)
    
    # Find and print result
    result = find_fire_spread(n, h, connections)
    for checkpost in result:
        print(checkpost)

if __name__ == "__main__":
    main()	