/*
 *	server/zone/objects/area/StaticSpawnArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "StaticSpawnArea.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "server/zone/objects/creature/aigroup/AiGroup.h"

#include "server/zone/objects/area/SpawnObserver.h"

#include "server/zone/objects/area/SpawnStaticAreaCreatureTask.h"

#include "server/zone/objects/scene/Observable.h"

/*
 *	StaticSpawnAreaStub
 */

StaticSpawnArea::StaticSpawnArea() : SpawnArea(DummyConstructorParameter::instance()) {
	StaticSpawnAreaImplementation* _implementation = new StaticSpawnAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

StaticSpawnArea::StaticSpawnArea(DummyConstructorParameter* param) : SpawnArea(param) {
}

StaticSpawnArea::~StaticSpawnArea() {
}


void StaticSpawnArea::registerObservers() {
	StaticSpawnAreaImplementation* _implementation = (StaticSpawnAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->registerObservers();
}

void StaticSpawnArea::spawnCreatures() {
	StaticSpawnAreaImplementation* _implementation = (StaticSpawnAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->spawnCreatures();
}

SpawnStaticAreaCreatureTask* StaticSpawnArea::addSpawnTask() {
	StaticSpawnAreaImplementation* _implementation = (StaticSpawnAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->addSpawnTask();
}

void StaticSpawnArea::doSpawnEvent() {
	StaticSpawnAreaImplementation* _implementation = (StaticSpawnAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		_implementation->doSpawnEvent();
}

void StaticSpawnArea::doDespawnEvent() {
	StaticSpawnAreaImplementation* _implementation = (StaticSpawnAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->doDespawnEvent();
}

int StaticSpawnArea::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	StaticSpawnAreaImplementation* _implementation = (StaticSpawnAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

bool StaticSpawnArea::isStaticArea() {
	StaticSpawnAreaImplementation* _implementation = (StaticSpawnAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isStaticArea();
}

DistributedObjectServant* StaticSpawnArea::_getImplementation() {

	_updated = true;
	return _impl;
}

void StaticSpawnArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	StaticSpawnAreaImplementation
 */

StaticSpawnAreaImplementation::StaticSpawnAreaImplementation(DummyConstructorParameter* param) : SpawnAreaImplementation(param) {
	_initializeImplementation();
}


StaticSpawnAreaImplementation::~StaticSpawnAreaImplementation() {
}


void StaticSpawnAreaImplementation::finalize() {
}

void StaticSpawnAreaImplementation::_initializeImplementation() {
	_setClassHelper(StaticSpawnAreaHelper::instance());

	_serializationHelperMethod();
}

void StaticSpawnAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (StaticSpawnArea*) stub;
	SpawnAreaImplementation::_setStub(stub);
}

DistributedObjectStub* StaticSpawnAreaImplementation::_getStub() {
	return _this;
}

StaticSpawnAreaImplementation::operator const StaticSpawnArea*() {
	return _this;
}

void StaticSpawnAreaImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void StaticSpawnAreaImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void StaticSpawnAreaImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void StaticSpawnAreaImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void StaticSpawnAreaImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void StaticSpawnAreaImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void StaticSpawnAreaImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void StaticSpawnAreaImplementation::_serializationHelperMethod() {
	SpawnAreaImplementation::_serializationHelperMethod();

	_setClassName("StaticSpawnArea");

	addSerializableVariable("spawnedAgents", &spawnedAgents);
	addSerializableVariable("unspawnedAgents", &unspawnedAgents);
	addSerializableVariable("groups", &groups);
	addSerializableVariable("observers", &observers);
}

StaticSpawnAreaImplementation::StaticSpawnAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/StaticSpawnArea.idl(71):  		spawnCreatures();
	spawnCreatures();
	// server/zone/objects/area/StaticSpawnArea.idl(72):  		registerObservers();
	registerObservers();
}

bool StaticSpawnAreaImplementation::isStaticArea() {
	// server/zone/objects/area/StaticSpawnArea.idl(88):  		return true;
	return true;
}

/*
 *	StaticSpawnAreaAdapter
 */

StaticSpawnAreaAdapter::StaticSpawnAreaAdapter(StaticSpawnAreaImplementation* obj) : SpawnAreaAdapter(obj) {
}

Packet* StaticSpawnAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		registerObservers();
		break;
	case 7:
		spawnCreatures();
		break;
	case 8:
		doSpawnEvent();
		break;
	case 9:
		doDespawnEvent();
		break;
	case 10:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	case 11:
		resp->insertBoolean(isStaticArea());
		break;
	default:
		return NULL;
	}

	return resp;
}

void StaticSpawnAreaAdapter::registerObservers() {
	((StaticSpawnAreaImplementation*) impl)->registerObservers();
}

void StaticSpawnAreaAdapter::spawnCreatures() {
	((StaticSpawnAreaImplementation*) impl)->spawnCreatures();
}

void StaticSpawnAreaAdapter::doSpawnEvent() {
	((StaticSpawnAreaImplementation*) impl)->doSpawnEvent();
}

void StaticSpawnAreaAdapter::doDespawnEvent() {
	((StaticSpawnAreaImplementation*) impl)->doDespawnEvent();
}

int StaticSpawnAreaAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((StaticSpawnAreaImplementation*) impl)->notifyObserverEvent(eventType, observable, arg1, arg2);
}

bool StaticSpawnAreaAdapter::isStaticArea() {
	return ((StaticSpawnAreaImplementation*) impl)->isStaticArea();
}

/*
 *	StaticSpawnAreaHelper
 */

StaticSpawnAreaHelper* StaticSpawnAreaHelper::staticInitializer = StaticSpawnAreaHelper::instance();

StaticSpawnAreaHelper::StaticSpawnAreaHelper() {
	className = "StaticSpawnArea";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void StaticSpawnAreaHelper::finalizeHelper() {
	StaticSpawnAreaHelper::finalize();
}

DistributedObject* StaticSpawnAreaHelper::instantiateObject() {
	return new StaticSpawnArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* StaticSpawnAreaHelper::instantiateServant() {
	return new StaticSpawnAreaImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* StaticSpawnAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StaticSpawnAreaAdapter((StaticSpawnAreaImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

