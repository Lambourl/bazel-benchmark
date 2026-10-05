#include "bench/fib.hpp"

// RE Benchmark TU 13522 of 20000 (depth=28, stamp="default")
namespace bench_tu_13522 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13522>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13522
