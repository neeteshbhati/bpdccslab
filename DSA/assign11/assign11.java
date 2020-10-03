import java.io.*; 
import java.util.*;

class Graph { 
	
	private int V;

	private LinkedList<Integer> adj[]; 

	Graph (int v) { 
		V = v; 
		adj = new LinkedList[v]; 
		for (int i=0; i<v; ++i) 
			adj[i] = new LinkedList(); 
	} 

	void addEdge(int v, int w) { 
		adj[v].add(w);
	} 

	void DFSUtil(int v,boolean visited[]) { 
		visited[v] = true; 
		System.out.print(v+" "); 

		Iterator<Integer> i = adj[v].listIterator(); 
		while (i.hasNext()) { 
			int n = i.next(); 
			if (!visited[n]) 
				DFSUtil(n, visited); 
		} 
	} 

	void DFS(int v) { 
		boolean visited[] = new boolean[V]; 
		DFSUtil(v, visited); 
	}

	void BFS(int s) {
 
		boolean visited[] = new boolean[V]; 

		LinkedList<Integer> queue = new LinkedList<Integer>(); 

		visited[s]=true; 
		queue.add(s); 

		while (queue.size() != 0) {
 
			s = queue.poll(); 
			System.out.print(s+" "); 
			
			Iterator<Integer> i = adj[s].listIterator(); 
			while (i.hasNext()) {
 
				int n = i.next(); 
				if (!visited[n]) {
 
					visited[n] = true; 
					queue.add(n); 
				} 
			} 
		} 
	}  
}

class assign11 {

	public static void main(String args[]) { 
		Graph graph = new Graph(4); 

		graph.addEdge(0, 1); 
		graph.addEdge(0, 2); 
		graph.addEdge(1, 2); 
		graph.addEdge(2, 0); 
		graph.addEdge(2, 3); 
		graph.addEdge(3, 3); 

		System.out.println("DFS is ");

		graph.DFS(2); 
      
                System.out.println("\nBFS is ");

		graph.BFS(2);
	} 
}
















