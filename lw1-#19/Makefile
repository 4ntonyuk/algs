LIBNAME = ScientificNotation
INDEXFILE = entry
OUTDIR = bin
SOURCES = lib/$(LIBNAME).cpp $(INDEXFILE).cpp
OBJECTS = $(patsubst lib/%.cpp,$(OUTDIR)/%.o,$(filter lib/%.cpp,$(SOURCES))) $(OUTDIR)/$(INDEXFILE).o
CXX = g++
CXXFLAGS = -c

all: $(OUTDIR)/lib$(LIBNAME).a start

$(OUTDIR):
	mkdir -p $(OUTDIR)

$(OUTDIR)/lib$(LIBNAME).a: $(OBJECTS)
	ar rcs $@ $^

$(OUTDIR)/%.o: lib/%.cpp | $(OUTDIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(OUTDIR)/$(INDEXFILE).o: $(INDEXFILE).cpp | $(OUTDIR)
	$(CXX) $(CXXFLAGS) $< -o $@

start: $(OUTDIR)/$(INDEXFILE).o $(OUTDIR)/lib$(LIBNAME).a
	$(CXX) $(OUTDIR)/$(INDEXFILE).o -L$(OUTDIR) -l$(LIBNAME) -o $(OUTDIR)/start

clean:
	rm -rf $(OUTDIR)
