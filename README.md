# Networking Experiments Repository  

This repository contains implementations of key networking concepts and algorithms in the form of experiments. The programs are designed to illustrate data link layer protocols, routing algorithms, congestion control, encryption, and more. Each experiment includes a clear aim and concise description to help understand the concepts better.  

## Table of Contents  
1. [Experiment 1: Framing Methods](#experiment-1-framing-methods)  
2. [Experiment 2: CRC Code Computation](#experiment-2-crc-code-computation)  
3. [Experiment 3: Sliding Window and Go-Back-N](#experiment-3-sliding-window-and-go-back-n)  
4. [Experiment 4: Dijkstra’s Algorithm](#experiment-4-dijkstra’s-algorithm)  
5. [Experiment 5: Distance Vector Routing](#experiment-5-distance-vector-routing)  
6. [Experiment 6: Broadcast Tree for a Subnet](#experiment-6-broadcast-tree-for-a-subnet)  
7. [Experiment 7: Data Encryption and Decryption](#experiment-7-data-encryption-and-decryption)  
8. [Experiment 8: Congestion Control Using Leaky Bucket](#experiment-8-congestion-control-using-leaky-bucket)  
9. [Experiment 9: Frame Sorting Techniques](#experiment-9-frame-sorting-techniques)  

---

### Experiment 1: Framing Methods  
**Aim**: To implement data link layer framing methods such as character, character stuffing, and bit stuffing.  

**Description**: This program demonstrates the framing techniques used in the data link layer to encapsulate data for reliable transmission. It includes character-based framing, character stuffing to handle delimiters, and bit stuffing for maintaining synchronization.  

---

### Experiment 2: CRC Code Computation  
**Aim**: To compute CRC codes for polynomials such as CRC-12, CRC-16, and CRC-CCIP.  

**Description**: This program implements the cyclic redundancy check (CRC) algorithm to detect errors in transmitted data. It computes CRC codes using different standard generator polynomials and demonstrates how data integrity is ensured in communication systems.  

---

### Experiment 3: Sliding Window and Go-Back-N  
**Aim**: To develop a simple data link layer that performs flow control using the sliding window protocol and loss recovery using the Go-Back-N mechanism.  

**Description**: This program simulates the sliding window protocol for efficient flow control and implements the Go-Back-N ARQ mechanism to recover lost frames during data transmission.  

---

### Experiment 4: Dijkstra’s Algorithm  
**Aim**: To implement Dijkstra’s algorithm to compute the shortest path through a network.  

**Description**: This program uses Dijkstra's algorithm to find the shortest paths from a source node to all other nodes in a weighted network graph. It demonstrates efficient routing in computer networks.  

---

### Experiment 5: Distance Vector Routing  
**Aim**: To implement the distance vector routing algorithm for obtaining routing tables at each node.  

**Description**: This program simulates the distance vector routing algorithm, allowing each node in a network to build and update its routing table based on information exchanged with its neighbors.  

---

### Experiment 6: Broadcast Tree for a Subnet  
**Aim**: To take an example subnet of hosts and obtain a broadcast tree for the subnet.  

**Description**: This program generates a broadcast tree for efficient message dissemination within a subnet. The broadcast tree ensures all hosts receive the message with minimal redundant transmissions.  

---

### Experiment 7: Data Encryption and Decryption  
**Aim**: To implement data encryption and decryption techniques.  

**Description**: This program provides basic encryption and decryption functionalities to ensure secure data transmission. It demonstrates how cryptographic techniques protect data integrity and confidentiality.  

---

### Experiment 8: Congestion Control Using Leaky Bucket  
**Aim**: To simulate congestion control using the Leaky Bucket algorithm.  

**Description**: This program implements the Leaky Bucket algorithm to manage network congestion by controlling the flow of packets. It demonstrates how the algorithm regulates data transmission to prevent overloading.  

---

### Experiment 9: Frame Sorting Techniques  
**Aim**: To implement frame sorting techniques used in buffers.  

**Description**: This program simulates frame sorting in network buffers, ensuring frames are stored and processed in the correct order for reliable data delivery.  

---

## License  
This repository is licensed under the MIT License. For more details, refer to the [LICENSE](LICENSE) file.  

## Contributing  
Contributions are welcome! Please create a pull request or raise an issue to discuss improvements or new features.  

## Acknowledgments  
These experiments are part of practical coursework designed to enhance understanding of networking protocols and algorithms.  

---
