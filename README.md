# Fest Management Platform

## Description

This Fest Management Platform is designed using Object-Oriented Programming to efficiently organize and coordinate college festivals. The system focuses on managing participants, core members, coordinators, and workforce involved in various events and activities during the fest.

## Component Classes

### 1. Participant

- **Description:** Represents students participating in fest events.
- **Attributes:**
  - Name
  - Roll Number
  - Contact Information

### 2. Core Member

- **Description:** Manages the overall fest, specializing in logistics, treasury, publicity, website management, etc.
- **Attributes:**
  - Name
  - Specialization
  - Subordinates (Coordinators)

### 3. Coordinator

- **Description:** Manages specific events/activities during the fest.
- **Attributes:**
  - Name
  - Events/Activities Managed
  - Subordinates (Workforce)

### 4. Workforce

- **Description:** Assists coordinators in executing events/activities.
- **Attributes:**
  - Name
  - Tasks Assigned
  - Coordinator (Supervisor)

## Relationships

- **Participant IS-A Student**
- **Core Member HAS-A Coordinator (Composition)**
- **Coordinator HAS-A Workforce (Composition)**
- **Coordinator REPORTS-TO Core Member**

## File Structure

The files are organized to reflect the hierarchical relationships and responsibilities of the classes:

- **main.cpp:** Contains the main program to execute the fest management platform. Has various usecases based on the roles of Participant, Core Member and Coordinator.
