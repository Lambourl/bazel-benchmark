#include "bench/fib.hpp"

// RE Benchmark TU 5302 of 20000 (depth=28, stamp="default")
namespace bench_tu_5302 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5302>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5302
