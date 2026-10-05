#include "bench/fib.hpp"

// RE Benchmark TU 16742 of 20000 (depth=28, stamp="default")
namespace bench_tu_16742 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16742>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16742
