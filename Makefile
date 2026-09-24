SUBDIRS = Lista_I Lista_II Lista_III Lista_IV

all: $(SUBDIRS)
	@echo "Todas as listas foram compiladas com sucesso!"

$(SUBDIRS):
	$(MAKE) -C $@ || exit 1

Lista_II: Lista_I
Lista_III: Lista_II
Lista_IV: Lista_III


clean:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
	@echo "Limpeza concluída!"

.PHONY: all clean $(SUBDIRS)
