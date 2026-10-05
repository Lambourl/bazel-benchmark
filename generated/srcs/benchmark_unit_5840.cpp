#include "bench/fib.hpp"

// RE Benchmark TU 5840 of 20000 (depth=28, stamp="default")
namespace bench_tu_5840 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5840>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5840
