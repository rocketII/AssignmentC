//
// Created by bps on 2016-03-03.
// Interface class
//

#ifndef ASSIGNMENTC_IQUEUE_H
#define ASSIGNMENTC_IQUEUE_H
template <typename T>
class IQueue
{
private:
public:
    //konstruktors and operators

    //member inherited functions
    virtual void enqueue(const T& element) = 0;
    virtual T dequeue()throw(...) = 0;
    virtual T front() const throw(...) = 0;
    virtual bool isEmpty() const = 0;
};
#endif //ASSIGNMENTC_IQUEUE_H

/*
 * enqueue(const T& element): lägger till element i kön. Eftersom kön ska
   kunna hantera många enqueue()- och dequeue() anrop är det viktigt att Du tänker till så att implementationen blir minnesmässigt effektiv
   (Tips: tänk cirkulärt utnyttjande av arrayen!). Om arrayens kapacitet trots detta inte räcker till ska den expandera
   (även här får Du tänka till så att ordningen i kön inte ändras).

    dequeue(): tar bort och returnerar det element som står först på tur.
   Undantag ska hanteras.
    front(): returnerar det element som står först på tur. Undantag ska hanteras.
    isEmpty(): returnerar sant om kön är tom, annars falskt.
   Utöver medlemsfunktionerna ska Du implementera konstruktor, destruktor, kopieringskonstruktor och tilldelningsoperator.
 */