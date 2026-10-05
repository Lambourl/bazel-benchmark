#include "bench/fib.hpp"

// RE Benchmark TU 201 of 20000 (depth=28, stamp="default")
namespace bench_tu_201 {
constexpr unsigned long long result = ::bench::slow_fib<28, 201>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_201
